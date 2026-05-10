from setuptools import find_packages
from setuptools import setup

setup(
    name='smart_turtle_interface',
    version='0.0.0',
    packages=find_packages(
        include=('smart_turtle_interface', 'smart_turtle_interface.*')),
)
