while True:
    a, b, c, d, l = map(int, input().split())
    # zj上測資有誤:
    # num = list(map(int, input().split()))
    # a, b, c, d, l = num[0], num[1], num[2], num[3], num[4]
    if a == b == c == d == l == 0:
        break
    cnt = 0
    for i in range(0, l+1):
        ans = a * i**2 + b * i + c
        if ans % d == 0:
            cnt += 1
    print(cnt)