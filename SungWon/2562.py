import sys

input = sys.stdin.readline
# max, index = 0, 0
# for i in range(1, 10):
#     num = int(input())
#     if num > max:
#         max = num
#         index = i
# print(max)
# print(index)

arr = [int(input()) for _ in range(9)]
max_value = max(arr)
print(max_value)
max_value_index = arr.index(max_value)
print(max_value_index + 1)
