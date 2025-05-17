from functools import cmp_to_key

def cmp(a, b):
    return a[1] - b[1]

def allCover(point):
    last = island[0][1]
    point -= 1
    for (x1, x2) in island:
        if x1 <= last:
            continue
        last = x2
        point -= 1
        if point < 0:
            return False
    return True
    

cnt = 0
while True:
    cnt += 1
    n, d = map(int, input().split())
    if n==0 and d==0:
        break
    island = []
    error = False
    for _ in range(n):
        x, y = map(int, input().split())
        if abs(y) > d:
            error = True
        if not error:
            #計算雷達信號可以包含島嶼的區間
            r = (d**2 - y**2)**0.5
            l = x - r#區間最左
            r = x + r #區間最又
            island.append((l, r))
    s = input() #blank
    if error:
        print(f"Case {cnt}: {-1}")
        continue
    island.sort(key=cmp_to_key(cmp))
    #print(island)
    
    # lower bound
    left = 1
    right = n
    while left < right:
        mid = (left + right) // 2
        if allCover(mid):
            right = mid 
        else:
            left = mid + 1
    print(f"Case {cnt}: {right}")
    
    