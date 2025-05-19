
t = int(input())
cnt = 0
for _ in range(t):
    cnt += 1
    s = input()
    num = list(map(int, s))
    total = sum(num)
    
    cnt_remain_0 = 0 #%3餘0
    cnt_remain_1 = 0 #%3餘1
    cnt_remain_2 = 0 #%3餘2
    
    for i in num:
        if i % 3 == 0:
            cnt_remain_0 += 1
        elif i % 3 == 1:
            cnt_remain_1 += 1
        else:
            cnt_remain_2 += 1
    
    ava_digits = cnt_remain_0
    if total % 3 == 2 or total % 3 == 1:
        ava_digits += 1
    if ava_digits % 2 == 1:
        print(f"Case {cnt}: S")
    else:
        print(f"Case {cnt}: T")
    #print(ava_digits)
    

# 餘3
# 3x 餘1
# 3x 餘2
# (餘1,餘2)
# 24 444
# 24 444 4
# 22444
# 222444 4
