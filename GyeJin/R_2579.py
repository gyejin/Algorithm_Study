import sys
input = sys.stdin.readline

N = int(input())
stair = [0]

for _ in range(N):
    score = int(input())
    stair.append(score)

#dp는 그 칸으로 올 수 있는 최대값
dp = [0] * (N+1)
#초기값 설정
dp[1] = stair[1]

if N >= 2:
    dp[2] = dp[1] + stair[2]

#연속해서 올라오는것과 뛰엄뛰엄 올라오는것 중 가장 큰거
for i in range (3, N+1):
    dp[i] = max(dp[i-2] + stair[i], dp[i-3] + stair[i-1] + stair[i])

print(dp[N])