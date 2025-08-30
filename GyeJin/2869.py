import sys
import math
input = sys.stdin.readline

A, B, V = map(int, input().split())
day = math.ceil((V-B) / (A-B))      #정상에 오르기 전 마지막 미끄러짐 배제, V-B까지 올라가는데 걸리는 시간 아~ 이렇게?

print(day)


"""
day = 0
temp = 0
while temp < V:
    day += 1
    temp += A
    if temp >= V:
        break
    temp -= B

print(day)
"""