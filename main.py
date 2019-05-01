#!/usr/bin/env python3
import sys

def fib(n):
    if (n <= 2):
        return 1
    return fib(n-1) + fib(n-2)

def fib2(n):

    fibs = [0,1];

    if n < 2:
        return fibs[n]
    
    for i in range(2, n+1):
        fibs.append(fibs[i-1] + fibs[i-2])

    return fibs[n]

if len(sys.argv) > 1:
    print(fib2(int(sys.argv[1])))
else:
    print(fib2(0))
