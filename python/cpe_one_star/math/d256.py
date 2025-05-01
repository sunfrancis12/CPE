while True:
    try:
        n = int(input())
        if n==0:
            break
        
        gcds = {}
        
        #建因數表
        # for i in range(1,n+1):
        #     #找因數
        #     num = []
        #     for j in range(1, i+1):
        #         if i%j==0: 
        #             num.append(j)
        #     gcds[i] = num

        g = 0
        for i in range(1,n):
            for j in range(i+1,n+1):
                gcd = 1
                #查表
                for k in gcds[j]:
                    if k>i:
                        break
                    if i%k == 0:
                        gcd = k
                g += gcd
        print(g)
    except:
        break