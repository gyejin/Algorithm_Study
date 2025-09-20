import sys
input = sys.stdin.readline

N = int(input())

if N <= 2:
    print(N)
else:
    dp = [0] * (N+1)
    dp[1] = 1
    dp[2] = 2

    for i in range(3, N+1):
        dp[i] = (dp[i-1] + dp[i-2]) % 15746
    
    print(dp(N))
    
"""
패턴 파악해서 이전값이 다음값으로 넘어간다는것을 확인해서 dp 바텀업 방식으로 풀기
cnt = 0

if N % 2 == 0:
    cnt = 2
    for i in range(int((N/2))+1, 1, -2):
        cnt += i

if N % 2 == 1:
    cnt = 1
    for j in range(2, int((N/2))+2):
        cnt += j

print(cnt)
"""