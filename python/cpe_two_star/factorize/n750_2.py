def f(n,start,data):
    for i in range(start, int(n**0.5)+1):
        if n%i == 0:
            data.append(i)
            f(n//i,i,data[:])
            data.append(n//i)
            Data.append(data[:])
            data.pop()
            data.pop()






while(1):
    Data=[]
    n = int(input())
    if n == 0:
        break
    f(n,2,[])
    if Data:
        print(len(Data))
        for i in Data:
            for j in i:
                print(j,end=" ")
            print()
    else:
        print(0)
            