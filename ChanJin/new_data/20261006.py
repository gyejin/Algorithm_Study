def solution(new_id):
    answer = ''
    
    new_id = new_id.lower()
    
    new = []
    for id in new_id:
        if id.isalpha() or id.isalnum():
            new.append(id)
        elif id == '.' or id == '-' or id == '_':
            if id == '.' and new and new[-1] == '.':
                continue
            elif len(new) == 0 and id == '.':
                continue
            else:
                new.append(id)
        else:
            continue
    
    if new and new[-1] == '.':
        new.pop()
    
    if len(new) == 0:
        new.append("a")
    
    if len(new) >= 16:
        new = new[0:15]
    
    if new and new[-1] == '.':
        new.pop()

    if len(new) <= 2:
        while len(new) != 3:
            new.append(new[-1])
    
    answer = ''.join(new)
    
    return answer