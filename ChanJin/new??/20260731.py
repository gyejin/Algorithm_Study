from itertools import permutations

def check(num):
    
    if num < 2:
        return False
    
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            return False
    return True

def solution(numbers):
    answer = 0
    num_list = list(numbers)
    num_len = len(num_list)
    
    candidates = set()
    for i in range(1, num_len+1):
        for j in permutations(num_list, i):
            num = int(''.join(j))
            candidates.add(num)

    for num in candidates:
        if check(num):
            answer += 1
    
    return answer