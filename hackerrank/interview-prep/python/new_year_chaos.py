#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumBribes function below.
def minimumBribes(q):
    moves = 0
    for pos, val in enumerate(q):
        if (val-1) - pos > 2:
            print("Too chaotic")
            return
        for j in range(max(0,val-2), pos):
            if q[j] > val:
                moves+=1
    print(moves)
    return 

if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        n = int(input())

        q = list(map(int, input().rstrip().split()))

        minimumBribes(q)

