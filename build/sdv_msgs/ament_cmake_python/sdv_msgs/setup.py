from setuptools import find_packages
from setuptools import setup

setup(
    name='sdv_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('sdv_msgs', 'sdv_msgs.*')),
)
