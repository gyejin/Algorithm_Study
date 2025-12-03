import sys

input = sys.stdin.readline

a = int(input())
b = int(input())
# b의 일의 자리 수 x a
# b의 십의 자리 수 x a
# b의 백의 자리 수 x a
print(a * (b % 10))
print(a * (b % 100 // 10))
print(a * (b // 100))
print(a * b)
