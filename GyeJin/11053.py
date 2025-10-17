import sys
input = sys.stdin.readline

N = int(input())
numList = list(map(int, input().split()))
dp = [1] * N

for i in range(1, N):       #두 번째 ~ 끝
    for j in range(i):      #현재 원소(i)의 앞쪽 모두 탐색
        if numList[j] < numList[i]:      #만약 앞쪽 원소(j)가 현재 원소(i)보다 작다면
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp))



"""
cnt = 0

for i in range(N):
    if (i == 0):
        num = numList[0]
        cnt += 1
    else:
        if(num < numList[i]):
            num = numList[i]
            cnt += 1
        
print(cnt)
"""