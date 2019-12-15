#!/bin/bash

basedir=$(cd `dirname $0`;pwd)
rootdir=$basedir/..

cd $rootdir
make clean && make
if [ $? -ne 0 ]; then
    echo "[ERROR] make file failed!"
fi
echo "=================================="
echo "run app"
echo "=================================="
./app
cd -
