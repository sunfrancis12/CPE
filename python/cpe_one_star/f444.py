while True:
    try:
        x = int(input())
        n = list(map(int, input().split()))
        n.reverse()
        sum = 0
        for i in range(1,len(n)):
            sum += i*n[i]*(x**(i-1))
        print(sum)
    except:
        break