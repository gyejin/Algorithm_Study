import sys
input = sys.stdin.readline

sys.setrecursionlimit(10000)
N, M = map(int, input().split())

graph = [[] for _ in range(N+1)]
visited = [False] * (N+1)

for _ in range(M):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

def dfs(v):
    visited[v] = True
    for i in graph[v]:
        if not visited[i]:
            dfs(i)

count = 0

for j in range(1, N+1):
    if not visited[j]:
        dfs(j)
        count += 1

print(count)