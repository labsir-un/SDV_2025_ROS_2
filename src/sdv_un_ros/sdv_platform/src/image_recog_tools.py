import cv2
import numpy as np
import pickle
import time
import os

'''
This file contains a set of multiple functions used by camera_watcher.py to 
detect the ROI of the platform and detect objects.
'''

def resize_img(img, scale_percent):
    width = int(img.shape[1] * scale_percent / 100)
    height = int(img.shape[0] * scale_percent / 100)
    dim = (width, height)
    img_res = cv2.resize(img, dim, interpolation=cv2.INTER_AREA)
    return img_res


def get_mask(img):
    # Preprocessing image: resizing and changing color space to grayscale
    img_bgr = cv2.cvtColor(img, cv2.COLOR_RGB2BGR)
    gray = cv2.cvtColor(img_bgr, cv2.COLOR_BGR2GRAY)

    # Smoothing and thresholding
    prep = cv2.bilateralFilter(gray, 9, 75, 75)
    ret3, prep_bin = cv2.threshold(prep, 0, 255, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)

    # Contours
    contours, hierarchy = cv2.findContours(prep_bin, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)[-2:]

    # Counting contours and getting the bigest
    area = 0
    index = -1
    for j in range(0, len(contours)):
        a = cv2.contourArea(contours[j])
        if area < a:
            area = a
            index = j

    # Drawing contours with a black background
    background = np.zeros((gray.shape[0], gray.shape[1], 3), dtype=np.uint8)
    mask = cv2.drawContours(background, contours, index, (255, 255, 255), thickness=cv2.FILLED)
    mask = cv2.cvtColor(mask, cv2.COLOR_RGB2GRAY)

    # Applying mask to image
    img_masked = cv2.bitwise_and(img_bgr, img_bgr, mask=mask)

    # Second mask: contour
    contour_mask = np.zeros((gray.shape[0], gray.shape[1]), dtype=np.uint8)
    perimeter = cv2.arcLength(contours[index], True)
    approx_poly = cv2.approxPolyDP(contours[index], 0.01 * perimeter, True)

    roi_detected = False
    centroids = np.zeros((6, 1, 2), dtype=np.int64)
    if len(approx_poly) == 6:
        roi_detected = True
        # Get line centroids
        for i in range(0, 6):
            index1 = i - 1
            if index1 < 0:
                index1 = 5
            pt1 = approx_poly[index1][0]
            pt2 = approx_poly[i][0]
            centroid = np.array([(pt1[0] + pt2[0]) / 2, (pt1[1] + pt2[1]) / 2])
            centroids[i][0] = centroid

    return [roi_detected, mask, approx_poly, centroids]


def image_feature_vector(img):
    vector = []

    # Image moments
    moments = cv2.moments(img)
    vector.append(moments['mu20'])
    vector.append(moments['mu11'])
    vector.append(moments['mu02'])
    vector.append(moments['mu30'])
    vector.append(moments['mu21'])
    vector.append(moments['mu12'])
    vector.append(moments['mu03'])
    vector.append(moments['nu20'])
    vector.append(moments['nu11'])
    vector.append(moments['nu02'])
    vector.append(moments['nu30'])
    vector.append(moments['nu21'])
    vector.append(moments['nu12'])
    vector.append(moments['nu03'])

    hu_moments = cv2.HuMoments(moments).flatten()
    for hu in hu_moments:
        vector.append(hu)

    vector = np.array(vector, 'float32')
    return np.reshape(vector, (1, 21))


def get_pca_train_data():
    path = os.path.dirname(__file__)
    file_handler = open(path + '/train_data_values.dat', 'rb')
    [final_data_set, train_responses, eigenvectors2, means, stds] = pickle.load(file_handler)
    file_handler.close()
    return final_data_set, train_responses, eigenvectors2, means, stds


def get_pca_knn():

    # Obtains the training data, responses array, Eigen Vectors, means and standard deviations
    [train_data, train_responses, eigenvectors2, means, stds] = get_pca_train_data()

    # KNN Classifier
    knn = cv2.ml.KNearest_create()
    knn.train(train_data, cv2.ml.ROW_SAMPLE, train_responses)

    return [knn, eigenvectors2, means, stds]


class ImageClassifier:

    def __init__(self, mask):
        self.mask = None
        self.set_mask(mask)
        [knn, eigenvectors2, means, stds] = get_pca_knn()
        self.knn = knn
        self.eigenvectors2 = eigenvectors2
        self.means = means
        self.stds = stds

    def set_mask(self, mask):
        cross = cv2.getStructuringElement(cv2.MORPH_CROSS, (5, 5))
        mask = cv2.erode(mask, cross, iterations=8)
        self.mask = mask

    def get_object(self, image):
        start = time.time()

        # Resize and change color space of received image
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

        # Applying Laplacian filter
        gray = cv2.medianBlur(gray, 5)
        img_lap = cv2.Laplacian(gray, cv2.CV_16S, ksize=3)
        kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (3, 3))
        img_lap = cv2.dilate(img_lap, kernel)
        img_lap = cv2.morphologyEx(img_lap, cv2.MORPH_OPEN, kernel)
        img_lap = cv2.morphologyEx(img_lap, cv2.MORPH_CLOSE, kernel)
        # ret, img_lap = cv2.threshold(img_lap, 60, 255, cv2.THRESH_TOZERO)

        # Applying eroded mask
        img_masked = cv2.bitwise_and(img_lap, img_lap, mask=self.mask)

        # Get feature vector of image
        data_n = image_feature_vector(img_masked)

        # Normalize features vector using eigenvectors2
        for d in range(data_n.shape[1]):
            data_n[0, d] = (data_n[0, d] - self.means[0, d]) / self.stds[0, d]
        data_n = np.dot(self.eigenvectors2.T, data_n.T).T

        # Obtains class value from KNN
        ret, result, neighbours, dist = self.knn.findNearest(data_n, k=1)
        res = int(result[0])

        # Calculate duration and printing
        end = time.time()
        dur = end - start

        return [res, img_masked, dur]
