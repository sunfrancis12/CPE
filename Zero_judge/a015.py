row,col = map(int, input().split())
matrix = []

for i in range(row):
    row = list(map(int, input().split()))
    matrix.append(row)
    
matrix = list(zip(*matrix))

for i in matrix:
    print(" ".join(map(str, i)))