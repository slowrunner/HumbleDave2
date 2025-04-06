from setuptools import find_packages
from setuptools import setup

setup(
    name='gopigo3_navigation',
    version='1.0.4',
    packages=find_packages(
        include=('gopigo3_navigation', 'gopigo3_navigation.*')),
)
