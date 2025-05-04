while True:
    n = int(input())
    if n == 0:
        break
    ran = {}
    s = f"{n**2:08d}"[2:6]
    cnt = 1
    while ran.get(s) == None:
        ran[s] = 1
        cnt += 1
        s = f"{int(s)**2:08d}"[2:6]
    
    print(cnt)