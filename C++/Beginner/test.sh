#!/bin/bash

for((i = 0;i<1000;i++ )); do
    python3 gen.py > input
    ./2-1 < input > output1
    ./2-1-2 < input > output2
    diff output1 output2 || break
done
