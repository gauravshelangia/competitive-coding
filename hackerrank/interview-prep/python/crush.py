#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the arrayManipulation function below.
def arrayManipulation(n, queries):
    max_val = 0
    arr = [0]*(n+1)
    for index, query in enumerate(queries):
        arr[query[0]] += query[2]
        if(query[1]+1<=n):
            arr[query[1]+1] -= query[2];
        
    
    x = 0;
    for i in range(n+1):
        x = x + arr[i]
        if(x>max_val):
            max_val = x
    return max_val

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    queries = []

    for _ in range(m):
        queries.append(list(map(int, input().rstrip().split())))

    result = arrayManipulation(n, queries)

    fptr.write(str(result) + '\n')

    fptr.close()

