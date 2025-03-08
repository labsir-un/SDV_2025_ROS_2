from setuptools import find_packages
from setuptools import setup

setup(
    name='sdv_scripts',
    version='0.0.1',
    packages=find_packages(
        include=('sdv_scripts', 'sdv_scripts.*')),
)
