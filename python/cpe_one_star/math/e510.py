s = int(input())
for _ in range(s):
    n, p, i = map(float, input().split())
    if(p==0):
        print(f"0.0000")
        continue
    a = (1-p)**(i-1)*p #首項
    r = (1-p)**n #公比
    ans = a/(1-r) #無窮等比
    print(f"{ans:.4f}")