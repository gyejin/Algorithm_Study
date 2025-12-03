import sys

input = sys.stdin.readline

n = int(input())
count = 0
number = n
# (n // 10) + (n % 10) = new_number
while True:
    count += 1
    a = number // 10
    b = number % 10
    c = a + b
    number = b * 10 + c % 10
    if number == n:
        break

print(count)
