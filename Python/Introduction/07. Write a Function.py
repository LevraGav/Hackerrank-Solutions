#!/bin/python3

import math
import os
import random
import re
import sys

def is_leap(year):
    leap = False
    
    # Write your logic here
    if (year % 4 == 0) and (year % 100 != 0 or year % 400 == 0):
        leap=True
    return leap

year = int(input())
print(is_leap(year))