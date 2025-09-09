import sys
input = sys.stdin.readline

N = int(input())


for i in range(N):
    cnt = 0
    VPS = input()
    if VPS[0] == ')':
        print("NO")
        continue
    for j in range(len(VPS)):
        if VPS[j] == '(':
            cnt += 1
        elif VPS[j] == ')':
            cnt -= 1
        if cnt < 0:
            break
    if len(VPS) != 0 and cnt == 0:
        print("YES")
    else:
        print("NO")