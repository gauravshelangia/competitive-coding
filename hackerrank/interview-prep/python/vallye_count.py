#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    current_level = 0
    previous_level = 0
    valley_count = 0
    for element in s:
        if element == 'U':
            current_level = current_level+1
        else:
            current_level = current_level -1
        
        if previous_level >= 0 and current_level < 0:
            valley_count = valley_count + 1
        previous_level = current_level
    return valley_count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()

