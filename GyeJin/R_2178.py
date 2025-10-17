import sys
from collections import deque

input = sys.stdin.readline
N, M = map(int, input().split())

maze = [list(input().strip()) for _ in range(N)]
distance = [[0] * M for _ in range(N)]

#maze = [[0 for _ in range(M)] for _ in range(N)]
#BFS = [[0 for _ in range(M)] for _ in range(N)]

#for i in range(N):
#    st = input().strip()
#    for j in range(M):
#        maze[i][j] = st[j]

def bfs(start_y, start_x):
    dx = [0, 0, -1, 1]
    dy = [-1, 1, 0, 0]

    #초기값
    queue = deque([(start_y, start_x)]) #시작지점 뽑음
    distance[start_y][start_x] = 1  #시작지점 거리 1로 설정

    #bfs
    while queue:
        y, x = queue.popleft()  #좌표
        for i in range(4):  #상 하 좌 우 한번씩 탐색
            ny = y + dy[i]
            nx = x + dx[i]

            if 0 <= ny < N and 0 <= nx < M:     #범위 벗어 나지 않으면
                if maze[ny][nx] == '1' and distance[ny][nx] == 0:   #이동 가능한 칸이거나 아직 방문x
                    distance[ny][nx] = distance[y][x] + 1   #이전 거리에서 + 1 해주기
                    queue.append((ny, nx))  #큐에 저장

bfs(0, 0)   #시작 좌표
print(distance[N-1][M-1])


"""
### ## 🤔 사고 과정 시뮬레이션 및 핵심 학습 포인트

1. **(문제 파악)**: (1,1)에서 (N,M)까지 가는 '최소 칸 수' -> 최단 경로 문제다!
2. **(알고리즘 선택)**: 모든 간선의 가중치가 1(한 칸 이동)인 그래프에서 최단 경로는 **BFS**가 가장 효율적이고 정확하다.
3. **(구현 계획)**:
    - 지도는 2차원 리스트로 받는다.
    - 방문 여부와 거리를 동시에 기록할 `distance` 2차원 리스트를 만든다. (이 부분에서 초기화 실수가 있었어요!)
    - `deque`로 큐를 만들고 시작점 `(0, 0)`을 넣는다. `distance[0][0]`은 1로 설정한다.
    - `while`문으로 큐가 빌 때까지 반복:
        - 현재 위치 `(y, x)`를 꺼낸다.
        - 상하좌우 네 방향으로 `(ny, nx)`를 계산한다.
        - `(ny, nx)`가 미로 범위 안이고, 길이고(`'1'`), 아직 방문 안 했다면(`distance == 0`):
            - `distance[ny][nx] = distance[y]+ 1` 로 거리를 기록한다.
            - 큐에 `(ny, nx)`를 넣는다.
4. **(최종 답)**: BFS가 끝나면 `distance[N-1][M-1]`에 최단 거리가 기록되어 있을 것이다.

> ⭐ Takeaway (핵심 교훈)BFS 로직을 완벽하게 짜놓고도 2차원 배열 초기화 같은 기본적인 부분에서 실수가 나올 수 있어요. 특히 [[0] * M for _ in range(N)] 와 같은 파이썬의 리스트 초기화 문법은 눈에 익혀두는 것이 중요해요!
"""