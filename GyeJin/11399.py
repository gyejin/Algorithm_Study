import sys
input = sys.stdin.readline

N = int(input())
P = list(map(int, input().split()))
total = 0
temp = 0

P.sort()

for i in range(N):
    temp += P[i]
    total += temp

print(total)