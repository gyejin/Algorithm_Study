import sys
input = sys.stdin.readline

N = int(input())


for i in range(N):
    cnt = 0
    VPS = input()       #항상.strip 기억하기
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

"""
#코드리뷰 정답
import sys
input = sys.stdin.readline

N = int(input())

for _ in range(N):
    ps = input().strip() # .strip() 추가!
    stack = []
    is_vps = True

    for char in ps:
        if char == '(':
            stack.append(char)
        elif char == ')':
            # 뺄 '('가 없는데 ')'가 나온 경우
            if not stack:
                is_vps = False
                break
            stack.pop()
    
    # 루프가 끝났는데 스택에 '('가 남아있는 경우
    if stack:
        is_vps = False
        
    print("YES" if is_vps else "NO")
"""