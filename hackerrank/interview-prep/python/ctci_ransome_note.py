#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the checkMagazine function below.
def checkMagazine(magazine, note):
    magazine_dict = {}
    for word in magazine:
        if word in magazine_dict:
            magazine_dict[word] = magazine_dict[word] + 1
        else:
            magazine_dict[word] = 1
            
    for word in note:
        if word not in magazine_dict:
            print("No")
            return
        else:
            magazine_dict[word] = magazine_dict[word]-1
            if(magazine_dict[word] == 0):
                del magazine_dict[word]
    print("Yes")

    
if __name__ == '__main__':
    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    magazine = input().rstrip().split()

    note = input().rstrip().split()

    checkMagazine(magazine, note)

