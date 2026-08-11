def solution(order):
    n = len(order)
    stack = []
    truck_num = 1
    answer = 0
    
    for want in order:
        while truck_num <= want:
            stack.append(truck_num)
            truck_num += 1
    
        if stack and stack[-1] == want:
            stack.pop()
            answer += 1
        else:
            break
    
    
    return answer