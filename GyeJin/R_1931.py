import sys
input = sys.stdin.readline

N = int(input())
conference = [0] * N

for i in range(N):
    conference[i] = list(map(int, input().split()))

#끝나는 시간을 기준으로 정렬
conference.sort(key=lambda x:(x[1], x[0]))

cnt = 0
last_end = 0

for start, end in conference:
    #시작 시간이 마지막으로 끝나는 시간보다 크면 +1 (단순?)
    if start >= last_end:
        cnt += 1
        last_end = end

print(cnt)