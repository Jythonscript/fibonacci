#!/usr/bin/env python3

def fib(n):
    if (n <= 2):
        return 1
    return fib(n-1) + fib(n-2)

print(fib(35))
