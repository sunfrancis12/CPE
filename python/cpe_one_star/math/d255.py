def gcd(a, b):
    while True:
        try:
            a %= b
            b %= a
        except:
            break
    return a+b

gcds = [[0 for i in range(501)] for j in range(501)]
for i in range(501):
    for j in range(501):
        gcds[i][j] = gcd(i,j)
# 另外一種輸入方式
# gcds = []
# for i in range(501):
#     temp = []
#     for j in range(501):
#         temp.append(gcd(i,j))
#     gcds.append(temp)

while True:
    try:
        n = int(input())
        if n==0:
            break
        g = 0
        for i in range(1,n):
            for j in range(i+1,n+1):
                g += gcds[i][j]
        print(g)
    except:
        break