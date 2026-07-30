def trans(num):
    
    t = []
    
    while num > 0:
        t.append(str(num%2))
        num = num//2
#    t.reverse()
    return ''.join(t)

def solution(numbers):
    answer = []
    
    for num in numbers:
        if num%2 == 0:
            answer.append(num + 1)
        else:
            trans1 = trans(num) + '0'
            k = 0
            
            while trans1[k] == '1':
                k += 1
            temp = list(trans1)
            temp[k] = '1'
            temp[k-1] = '0'
            # temp.reverse()
            
            i = 1
            temp_bin = 0
            
            for t in temp:
                temp_bin += int(t) * i
                i = i * 2
            
            answer.append(temp_bin)
    
    return answer