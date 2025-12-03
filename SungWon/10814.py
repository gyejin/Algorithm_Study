import sys

input = sys.stdin.readline

# 총 N개의 줄에 걸쳐 온라인 저지 회원을 나이 순, 나이가 같으면 가입한 순으로 한 줄에 한 명씩 나이와 이름을 공백으로 구분해 출력
N = int(input())
users = list()
for _ in range(N):
    age, name = input().split()
    age = int(age)
    users.append((age, name))

users.sort(key=lambda x: x[0])
for user in users:
    print(user[0], user[1])
