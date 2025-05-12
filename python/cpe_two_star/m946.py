n = int(input())

for i in range(1,n+1):
    num = int(input())
    ans = ""
    while num:
        q, r = divmod(num,-2)
        if r < 0:
            r += 2
            q += 1
        ans += str(r)
        num = q
    
    print(f"Case #{i}: {ans[::-1] if ans else 0}")
    
# Source Code: https://gdst.dev/posts/UVA-11121/
