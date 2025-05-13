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
    for _ in range(n):
        map = [list(input()) for _ in range(r)]
        next_map = map.copy()
        for i in range(r):
            for j in range(c):
                for item in direct:
                    temp_x = i + item[0]
                    temp_y = j + item[1]
                    if inrange(temp_x, temp_y):
                        if map[i][j] == 'R' and map[temp_x][temp_y] == 'S':
                            next_map[temp_x][temp_y] = 'R'
                        elif map[i][j] == 'S' and map[temp_x][temp_y] == 'P':
                            next_map[temp_x][temp_y] = 'S'
                        elif map[i][j] == 'P' and map[temp_x][temp_y] == 'R':
                            next_map[temp_x][temp_y] = 'P'
        map = next_map.copy()
    for s in map:
        print("".join(s))
    
    print()
    
                    
                
    
