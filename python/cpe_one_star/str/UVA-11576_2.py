t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    words = [input() for _ in range(m)]
    
    ans = n*m
    for i in range(1,m):
        wa, wb = words[i-1], words[i]
        for j in range(n):
            if wa[j:] == wb[:n-j]:
                ans -= n - j
                break
    print(ans)

# 參考自: https://gdst.dev/posts/UVA-11576/