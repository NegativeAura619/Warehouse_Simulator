#!/bin/bash

echo "Building warehouse simulator..."

g++ main.cpp world.cpp orders.cpp -o warehouse_sim

if [ $? -eq 0 ]; then
    echo "Build OK"
    ./warehouse_sim
else
    echo "Build FAILED"
fi
