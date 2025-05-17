t = int(input())
cnt = 0

def sym(matrix, r):
    for i in range(r):
        for j in range(r):
            if matrix[i][j] != matrix[r-1-i][r-1-j]:
                return False
    return True

for _ in range(t):
    cnt += 1
    s = list(input().split())
    r = int(s[-1])
    matrix = []
    nonsym = False
    for _ in range(r):
        temp = list(map(int, input().split()))
        matrix.append(temp)
        if any(x < 0 for x in temp):
            nonsym = True
    
    if nonsym:
        print(f"Test #{cnt}: Non-symmetric.")
        continue
    if sym(matrix, r):
        print(f"Test #{cnt}: Symmetric.")
    else:
        print(f"Test #{cnt}: Non-symmetric.")
                