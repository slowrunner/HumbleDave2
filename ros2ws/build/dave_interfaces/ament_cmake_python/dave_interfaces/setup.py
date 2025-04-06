from setuptools import find_packages
from setuptools import setup

setup(
    name='dave_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('dave_interfaces', 'dave_interfaces.*')),
)
