while True:
    n, m = map(int, input().split())
    if n == 0 and m == 0:
        break
    a_cnt = 0
    start = 1
    while start**2 < n:
        a_cnt += 1
        start += 1
    b_cnt = 0
    start = 1
    while start**2 <= m:
        b_cnt += 1
        start += 1
    print(b_cnt - a_cnt)