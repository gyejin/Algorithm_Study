import re

def solution(files):
    answer = []
    
    parsed = []
    for file in files:
        match = re.match(r'([^\d]+)(\d+)(.*)', file)
        head = match.group(1).lower()
        number = int(match.group(2))
        parsed.append((head, number))
    
    # 원래 인덱스도 같이 정렬해서, 정렬 후 원본 파일명을 찾을 수 있게 함
    order = sorted(range(len(files)), key=lambda i: parsed[i])
    answer = [files[i] for i in order]
    
    return answer


def parse(file):
    i = 0
    while i < len(file) and not file[i].isdigit():
        i += 1
    head = file[:i]
    
    j = i
    while j < len(file) and file[j].isdigit():
        j += 1
    number = file[i:j]
    
    tail = file[j:]
    return head, number, tail

def solution(files):
    answer = []
    
    parsed = [parse(f) for f in files]
    
    indexed = sorted(range(len(files)), key = lambda i: (parsed[i][0].lower(), int(parsed[i][1])))
        
    
    return [files[i] for i in indexed]