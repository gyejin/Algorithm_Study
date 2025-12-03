import sys

input = sys.stdin.readline

count = 0
sets = set()
for _ in range(10):
    sets.add(int(input()) % 42)

print(len(sets))
