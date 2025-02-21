#!/bin/bash
set -xe

OS=$(uname -s)

if [ "$OS" = "Linux" ]; then
    if command -v yum &> /dev/null; then
        sudo yum install -y gcc gcc-c++ make protobuf protobuf-devel python3-devel python3-setuptools gdb
    elif command -v apt-get &> /dev/null; then
        sudo apt-get update
        sudo apt-get install -y build-essential protobuf-compiler libprotobuf-dev python3-dev python3-setuptools gdb
    fi
elif [ "$OS" = "Darwin" ]; then
    if ! command -v brew &> /dev/null; then
        echo "Homebrew не установлен. Пожалуйста, установите Homebrew"
        exit 1
    fi
    brew install protobuf python@3.12
fi

ulimit -c unlimited

cd /tmp/otus/

protoc --cpp_out=. deviceapps.proto

python setup.py build_ext --inplace