#!/usr/bin/env python3
import sys

# return nth item in the fibonacci sequence
def fib(n):
    if (n <= 2):
        return 1
    return fib(n-1) + fib(n-2)

# return nth item in the fibonacci sequence, using dynamic programming
def fib2(n):

    fibs = [0,1]; # list of items in the fibonacci sequence

    if n < 2: # edge case for low index
        return fibs[n]
    
    for i in range(2, n+1):
        fibs.append(fibs[i-1] + fibs[i-2])

    return fibs[n]

# check for arguments
if len(sys.argv) > 1:
    print(fib2(int(sys.argv[1])))
else:
    print(fib2(0)) # default value
