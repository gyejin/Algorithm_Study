def solution(msg):
    answer = []
    
    dic = {chr(65+i): i+1 for i in range(26)}
    next_idx = 27
    
    w = ''
    
    for c in msg:
        if (w + c) in dic:
            w = w + c
        else:
            answer.append(dic[w])
            dic[w+c] = next_idx
            next_idx += 1
            w = c
    
    answer.append(dic[w])
    
    return answer