import sys
input = sys.stdin.readline

N = int(input())
dp = [0] * (N+1)

def fibo(n):
    for i in range(n+1):
        if i == 0:
            dp[i] = 0
        elif i == 1 or i == 2:
            dp[i] = 1
        else:
            dp[i] = dp[i-1] + dp[i-2]

fibo(N)
print(dp[N])