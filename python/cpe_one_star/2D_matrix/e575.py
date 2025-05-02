t = int(input())
for _ in range(t):
    m, n, q = map(int, input().split())
    print(m,n,q)
    field = []
    def in_range(x, y):
        return x>=0 and y>=0 and x<m and y<n
    def find(x, y, c):
        size = 1
        for i in range(1,max(m,n)):
            for j in range(-i,i+1):
                if not in_range(x+j, y+i) or field[x+j][y+i] != c: #上面那一排
                    return size
                if not in_range(x+i, y+j) or field[x+i][y+j] != c: #右邊那一排
                    return size
                if not in_range(x+j, y-i) or field[x+j][y-i] != c: #下面那一排
                    return size
                if not in_range(x-i, y+j) or field[x-i][y+j] != c: #左邊那一排
                    return size
            size +=2
        return size
    for i in range(m):
        field.append(input())
    for _ in range(q):
        x, y = map(int, input().split())
        print(find(x, y, field[x][y]))
                    