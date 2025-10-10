import sys
input = sys.stdin.readline

#-로 우선 나눈다음
num = list(input().strip().split('-'))

for i in range(len(num)):
    numHap = list(map(int, num[i].split('+')))      #-로 분리된 남은 리스트를 또 +로 나눔
    if i == 0:  #첫 번째는 무조건 +일것임 (처음과 끝은 문자 == 음수는 처음에 나올 수 없다)
        total = sum(numHap)
        continue
    total -= sum(numHap)        #두번째부턴 무조건 빼서 넣어야지

print(total)