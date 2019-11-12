#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    pair_count = 0
    pairs = {}
    for num in ar:
        if num in pairs:
            pair_count = pair_count +1
            pairs.pop(num, None)
        else:
            pairs[num] = 1
    return pair_count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()

