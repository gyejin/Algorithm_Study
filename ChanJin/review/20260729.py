def find_blocks_to_remove(board, m, n):
    to_remove = set()
    for x in range(m - 1):
        for y in range(n - 1):
            if board[x][y] != '0' and (board[x][y] == board[x][y+1] == board[x+1][y] == board[x+1][y+1]):
                to_remove.add((x, y))
                to_remove.add((x, y+1))
                to_remove.add((x+1, y))
                to_remove.add((x+1, y+1))
    return to_remove

def apply_gravity(board, m, n):
    for y in range(n):
        col = [board[x][y] for x in range(m) if board[x][y] != '0']
        col =['0'] * (m - len(col)) + col
        for x in range(m):
            board[x][y] = col[x]

def solution(m, n, board):
    answer = 0
    board = [list(row) for row in board]
    
    while True:
        to_remove = find_blocks_to_remove(board, m, n)
        if not to_remove:
            break
        answer += len(to_remove)
        for (x, y) in to_remove:
            board[x][y] = '0'
        apply_gravity(board, m, n)
    
    return answer