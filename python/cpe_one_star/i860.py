t = int(input())
for _ in range(t):
    ss = list(input().split())
    m, y, c = map(int, ss[:3])
    s = ss[3]
    #MYCRBGVW
    can = True
    for i in s:
        if i == "M":
            m -= 1
        elif i == "Y":
            y -= 1
        elif i == "C":
            c -= 1
        elif i == "R":
            m -= 1
            y -= 1
        elif i == "B":
            m -= 1
            y -= 1
            c -= 1
        elif i == "G":
            y -= 1
            c -= 1
        elif i == "V":
            m -= 1
            c -= 1
        elif i == "W":
            continue
        if m<0 or y<0 or c<0:
            can = False
            break
    if can:
        print("YES", m, y, c)
    else:
        print("NO")
        
            
        
    