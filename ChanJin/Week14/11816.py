import sys

input = sys.stdin.readline

n = input()

if n.startswith("0x"):
    print(int(n, 16))
elif n.startswith("0") and n != "0":
    print(int(n, 8))
else:
    print(int(n, 10))
