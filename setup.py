import os
from setuptools import setup, Extension

module1 = Extension(
    "pb",
    sources=["pb.cpp", "deviceapps.pb.cc"],
    extra_compile_args=["-g", "-std=c++17"],
    libraries=["protobuf"],
    library_dirs=["/usr/local/lib"],
    include_dirs=["/usr/local/include", "/usr/local/opt/llvm/include"],
)

os.environ["CC"] = "g++"
os.environ["CXX"] = "g++"

setup(
    name="pb",
    version="1.0",
    description="Protobuf (de)serializer",
    ext_modules=[module1],
)
