import sys
input = sys.stdin.readline

T = int(input())
for i in range(T):
    apps = []
    cnt = 0
    N = int(input())
    for j in range(N):
        apps.append(list(map(int, input().split())))

    # 행 기준 2차원 배열 정렬
    apps.sort()
    first_doc = apps[0][1]  #맨 앞에꺼가 서류 1등이니까 무조건 합격, 면접 점수를 기준으로 정함
    # 열 기준 2차원 배열 정렬
    apps.sort(key=lambda x:x[1])
    first_intr = apps[0][0] #맨 앞에꺼가 면접 1등이니까 무조건 합격, 서류 점수 기준으로 정함

    # 각 1등 서류/면접 점수 기점으로 합/불결정
    for k in range(N):
        if first_doc >= apps[k][1]:
            if first_intr >= apps[k][0]:
                cnt += 1
    print(cnt)