def is_vaild(s1, s2):
    combine = s1 + s2
    return set(combine) == set("0123456789") #使用集合查看是否相同，這裡會檢查 combine是否有 0-9的所有數字


while True:
    n = int(input())
    if n == 0:
        break
    cnt = 0
    for i in range(1234, 98765):
        s1 = f"{i:05d}"
        d2 = i*n
        if d2 > 98765:
            break
        s2 = f"{d2:05d}"
        if is_vaild(s1, s2):
            cnt += 1
            print(f"{d2:05d} / {i:05d} = {n}")
    if cnt == 0:
        print(f"There are no solutions for {n}.")
    print()
