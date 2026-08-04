def solution(queue1, queue2):
    answer = -2
    
    total_sum1 = sum(queue1)
    total_sum2 = sum(queue2)
    
    if (total_sum1 + total_sum2) % 2 == 1:
        return -1
    
    target = (total_sum1 + total_sum2) // 2
    
    combined = queue1 + queue2
    
    p1 = 0
    p2 = len(queue1)
    
    max_count = len(queue1) * 4
    count = 0
    
    current_sum = total_sum1
    
    while count <= max_count:
        if current_sum == target:
            return count
        
        if current_sum < target:
            current_sum += combined[p2]
            p2 = (p2 + 1) % len(combined)
        else:
            current_sum -= combined[p1]
            p1 = (p1 + 1) % len(combined)
            
        count += 1
        
    return -1
    
    return answer