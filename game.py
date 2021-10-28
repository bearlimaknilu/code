# up, right, down, left
dx = [0, 1, 0, -1]
dy = [-1, 0, 1, 0]

N = 7;
grid = []

def read_grid():
    for row in range(N):
        for col in range(N):
            grid[row][col] = input()

def inside(row, col):
    return 0 <= row and row < N and 0 <= col and col < N

class Player:
    def __init__(self, row, col):
        self.row = row
        self.col = col
    def read():
        row, col = map(int, input().split())

while True:
    turn_type = int(input())
    read_grid()
    Player me, he
    me.read()
    he.read()
