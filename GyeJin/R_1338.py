#25.09.10 Fail 1 hour -> AI code Reivew

import sys
input = sys.stdin.readline

N, M = map(int, input().split())
floor = [input().strip() for _ in range(N)]     #이렇게도 사용 가능하구나! ■리스트 컴프리헨션 싹 정리
count = 0

# 1. 가로('-') 모양 판자 개수 세기
for i in range(N):  # 한 행씩 순회
    for j in range(M):  # 한 열씩 순회
    #리뷰: 행단위로 돌겠네!
        if floor[i][j] == '-':
            # 만약 현재 칸이 열의 시작(j==0)이거나,
            # 바로 왼쪽 칸이 같은 모양('-')이 아니라면, 새로운 판자의 시작이다.
            if j == 0 or floor[i][j-1] != '-':
                count += 1

# 2. 세로('|') 모양 판자 개수 세기
for j in range(M):  # 한 열씩 순회
    for i in range(N):  # 한 행씩 순회
    #리뷰: 열단위로 돌겠네!
        if floor[i][j] == '|':
            # 만약 현재 칸이 행의 시작(i==0)이거나,
            # 바로 윗 칸이 같은 모양('|')이 아니라면, 새로운 판자의 시작이다.
            if i == 0 or floor[i-1][j] != '|':
                count += 1

print(count)
#리뷰: 아 다음 한칸씩만 비교해서 이어지는지 확인하면 되는거야? 안이어지면 +1하고 이어지면 그대로 돌고?


#헷갈린점 : 연속된걸 하나만 세고, 한 줄이 끝나면 또 카운트 해줘야하고, 세로줄은 세로줄끼리 세야하고
"""
import sys
input = sys.stdin.readline

N, M = map(int, input().split())
tile = [0 for _ in range(N)]
cnt = 0
temp = 0
consecutive = 0

for k in range(N):
    tile[k] = input().strip()

for i in range(N):
    for j in range(M):
        if j == (M-1) and tile[i][M-1] == '-':
            cnt += 1
        if tile[i][j] == '-':
            consecutive = 0
            temp += 1
            continue
        elif tile[i][j] == '|':
            temp = 0
            consecutive += 1
        if temp == 0 and consecutive == 1:
            cnt += 1

temp = 0
consecutive = 0
for i in range(N):
    for j in range(M):
        if i == (N-1) and tile[N-1][j] == '|':
            cnt += 1
        if tile[i][j] == '|':
            consecutive = 0
            temp += 1
            continue
        elif tile[i][j] == '-':
            temp = 0
            consecutive += 1
        if temp == 0 and consecutive == 1:
            cnt += 1
print(cnt)
"""