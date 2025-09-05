"""
0과 높이를 미리 길이 리스트에 받아놓고
높이리스트에 입력받은 값 하나씩 채움(조건 달아서 가로0인지 세로1인지)
정렬해야 순서대로 설거고
정렬된 높이리스트를 앞전 길이를 빼면서 비교하면서 젤 긴거 파악
"""
import sys
input = sys.stdin.readline

r, c = map(int, input().split())
N = int(input())

r_vertical = [0, r]
c_height = [0, c]

for _ in range(N):
    dir, cut = map(int, input().split())
    if dir == 1:
        r_vertical.append(cut)
    else:
        c_height.append(cut)

r_vertical.sort()
c_height.sort()

max_vertical = 0
max_height = 0

for i in range (1, len(r_vertical)):
    w = r_vertical[i] - r_vertical[i-1]
    if w > max_vertical:
        max_vertical = w

for j in range(1, len(c_height)):
    h = c_height[j] - c_height[j-1]
    if h > max_height:
        max_height = h

print(max_vertical * max_height)