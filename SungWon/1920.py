import sys

input = sys.stdin.readline

N = int(input())
sets = set(map(int, input().split()))

M = int(input())
nums = list(map(int, input().split()))
for num in nums:
    if num in sets:
        print(1)
    else:
        print(0)
