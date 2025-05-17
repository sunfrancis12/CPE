# 一維dp
t = int(input())
for _ in range(t):
    length = int(input())
    n = int(input())
    bars = list(map(int, input().split()))
    dp = [0 for _ in range(length+1)]
    
    for i in bars:
        for j in range(length, 0, -1):
            if j >= i:
                dp[j] = max(dp[j], dp[j - i] + i)
    
    if (dp[length] == length):
        print("YES")
    else:
        print("NO")
    