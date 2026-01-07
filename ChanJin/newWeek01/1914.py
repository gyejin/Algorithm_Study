import sys

input = sys.stdin.readline

def hanoi(n, start, end, sub):
    if n == 1:
        print(start, end)
        return

    hanoi(n - 1, start, end, sub)
    print(start, end)
    hanoi(n -1, sub, start, end)

n = int(input())
k = 2**n -1
print(k)

if n <= 20:
    hanoi(n, 1, 3, 2)





