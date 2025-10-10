import sys
sys.stdin.readline

N = int(input())
cnt = 0

for i in range(1, N+1):
    if i >= 100:        #세번째 자리부터 조건 붙음
        ns = str(i)
        if int(ns[1]) - int(ns[0]) == int(ns[2]) - int(ns[1]):
            cnt += 1
    else:   #둘째 자리까진 괜춘
        cnt += 1
print(cnt)