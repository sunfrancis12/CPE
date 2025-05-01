area = [
    [1, 1],
    [1, 0],
    [1, -1],
    [0, 1],
    [0, -1],
    [-1, 1],
    [-1, 0],
    [-1, -1]
]

cnt = 1

while True:
    n, m = map(int, input().split())
    if n==0 and m==0:
        break
    field = [[0 for j in range(m)]for i in range(n)]
    
    s =[]
    for _ in range(n):
        s.append(input())
    
    for i in range(n):
        for j in range(m):
            if s[i][j] == "*":
                field[i][j] = "*"
                for _ in area:
                    x = i + _[0]
                    y = j + _[1]
                    if x<0 or y<0 or x>=n or y>=m:
                        continue
                    elif field[x][y] == "*":
                        continue
                    else:
                        field[x][y] += 1
    print(f"Field #{cnt}:")
    for _ in field:
        print(''.join(map(str, _)))
    print()
    cnt +=1

    