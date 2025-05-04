def factor(n, start, data):
    for i in range(start,int(n**0.5)+1):
        if n%i==0:
            data.append(i)
            factor(n//i, i, data.copy())
            data.append(n//i)
            s.append(data.copy())
            data.pop()
            data.pop()
        

while True:
    n = int(input())    
    if n == 1:
        print(0)
        continue
    if n== 0:
        break
    s = []
    factor(n, 2, [])
    print(len(s))
    for i in s:
        print(" ".join(map(str, i)))