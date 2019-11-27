#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the makeAnagram function below.
def makeAnagram(a, b):
    aCount = [0]*26
    for ele in a:
        aCount[97-ord(ele)]=aCount[97-ord(ele)]+1
    
    bCount = [0]*26
    for ele in b:
        bCount[97-ord(ele)]=bCount[97-ord(ele)]+1
    
    deletion = 0
    for i in range(0,26):
        deletion = deletion+abs(bCount[i]-aCount[i])
    return deletion
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = input()

    b = input()

    res = makeAnagram(a, b)

    fptr.write(str(res) + '\n')

    fptr.close()

