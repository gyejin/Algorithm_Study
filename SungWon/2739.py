import sys

input = sys.stdin.readline

n = int(input())
for g in range(1, 10):
    print(f"{n} * {g} = {n * g}")
