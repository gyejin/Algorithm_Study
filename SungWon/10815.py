import sys

input = sys.stdin.readline

# 1. set 을 이용한 풀이
N = int(input())
sets = set(map(int, input().split()))
M = int(input())
nums = list(map(int, input().split()))
for num in nums:
    if num in sets:
        print(1)
    else:
        print(0)


# 2. binary search 를 이용한 풀이
def binary_serach(arr, target):
    start = 0
    end = len(arr) - 1
    while start <= end:
        mid = (start + end) // 2
        if arr[mid] == target:
            return True
        elif arr[mid] < target:
            start = mid + 1
        else:
            end = mid - 1
    return False


N = int(input())
arr1 = list(map(int, input().split()))
M = int(input())
arr2 = list(map(int, input().split()))
arr1.sort()
for num in arr2:
    if binary_serach(arr1, num):
        print(1, end=" ")
    else:
        print(0, end=" ")
