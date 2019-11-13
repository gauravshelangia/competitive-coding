#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
    size = len(c)
    num_jumps = 0
    index = 0
    for i in range( size-1):
        if i!=index:
            continue
        
        if i+2 >= size:
            num_jumps = num_jumps + 1
            break
        elif i+2 < size and c[i+2] == 0:
            num_jumps = num_jumps + 1
            index = i +2
            if index >= size:
                break
        elif i+1 < size and c[i+1] == 0:
            num_jumps = num_jumps + 1
            index = i + 1
            if index >= size:
                break

    return num_jumps

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c)

    fptr.write(str(result) + '\n')

    fptr.close()

