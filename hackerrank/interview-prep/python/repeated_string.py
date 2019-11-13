#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
def repeatedString(s, n):
    occurrence = 0
    length = len(s)
    for ele in s:
        if ele == 'a':
            occurrence = occurrence+1
    repeatCount = n//length;
    occurrence = occurrence * repeatCount
    remainder = n % length
    for i in range(0,remainder):
        if s[i] == 'a':
            occurrence = occurrence + 1
    return occurrence

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()

