import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)    #재귀 limit해제

N, K = map(int, input().split())
coin = [int(input()) for _ in range(N)]
cnt = 0

for i in range(N-1, -1, -1):    #오름차순이니까 거꾸로 반복문
    cnt += K // coin[i]
    K = K % coin[i]

print(cnt)