from setuptools import find_packages
from setuptools import setup

setup(
    name='matrix_interface',
    version='0.0.0',
    packages=find_packages(
        include=('matrix_interface', 'matrix_interface.*')),
)
