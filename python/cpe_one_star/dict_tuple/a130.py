t = int(input())
for i in range(1,t+1):
    s = []
    max = 0
    for _ in range(10):
        temp = list(input().split())
        s.append((temp[0],int(temp[1])))
        if int(temp[1]) > max:
            max = int(temp[1])
    print(f"Case #{i}:")
    for j in s:
        if j[1] >= max:
            print(j[0])
        