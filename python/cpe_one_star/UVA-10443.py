import copy
def inrange(x, y):
    if x>=0 and y>=0 and x<r and y<c:
        return True

direct = [
    [0, 1],
    [0, -1],
    [1, 0],
    [-1, 0]
]

t = int(input())
for _ in range(t):
    r, c, n = map(int, input().split())
    field = [list(input()) for _ in range(r)]
    for _ in range(n):
        next_map = copy.deepcopy(field)
        for i in range(r):
            for j in range(c):
                for item in direct:
                    temp_x = i + item[0]
                    temp_y = j + item[1]
                    if inrange(temp_x, temp_y):
                        if field[i][j] == 'R' and field[temp_x][temp_y] == 'S':
                            next_map[temp_x][temp_y] = 'R'
                        elif field[i][j] == 'S' and field[temp_x][temp_y] == 'P':
                            next_map[temp_x][temp_y] = 'S'
                        elif field[i][j] == 'P' and field[temp_x][temp_y] == 'R':
                            next_map[temp_x][temp_y] = 'P'
        field = copy.deepcopy(next_map)
    for s in field:
        print("".join(s))
    
    print()

# 答案是對的，但是Uva上會 TLE