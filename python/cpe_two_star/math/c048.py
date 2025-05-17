while True:
    n = int(input())
    if n == 0:
        break
    s = n**0.5
    int_s = int(s)
    if s > int_s:
        offest = n - int_s**2
        if int_s%2 == 0:
            if offest > int_s + 1:
                print(int_s + 1 -(offest - (int_s + 1)), int_s+1)
            else:
                print(int_s+1, offest)
        else:
            if offest > int_s + 1:
                print(int_s+1, int_s + 1 -(offest - (int_s + 1)))
            else:
                print(offest, int_s+1)
    else:
        if s%2 == 0:    
            print(int_s,1)
        else:
            print(1,int_s)