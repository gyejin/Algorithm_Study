import sys
input = sys.stdin.readline

N = int(input())
#dp[i] = 숫자 i를 1로 만드는데 필요한 최소 연산 횟수
dp = [0] * (N+1)
#초깃값 설정
dp[1] = 0

#점화식 설정
for i in range(2, N+1):
    if i % 2 != 0 and i % 3 == 0 :
        dp[i] = min(dp[i-1], dp[int(i/3)]) + 1
    elif i % 2 == 0 and i % 3 != 0:
        dp[i] = min(dp[i-1], dp[int(i/2)]) + 1
    elif i % 2 != 0 and i % 3 != 0:
        dp[i] = dp[i-1] + 1
    else:
        dp[i] = min(dp[i-1], dp[int(i/2)], dp[int(i/3)]) + 1

print(dp[N])



"""
cnt = 0

while True:
    if N % 3 == 0:
        cnt += 1
        N /= 3
    elif N % 2 == 0:
        cnt += 1
        N /= 2
    else:
        cnt += 1
        N -= 1

    print(N)
    if N == 1:
        break 

print(cnt)
"""