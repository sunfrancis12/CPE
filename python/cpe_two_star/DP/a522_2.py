# 二維dp
t = int(input())
for _ in range(t):
    length = int(input())
    n = int(input())
    bars = [0] + list(map(int, input().split()))
    dp = [[0 for _ in range(length+1)] for _ in range(n+1)]
    
    for i in range(1,n+1):
        for j in range(1,length+1):
            if j >= bars[i]:
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-bars[i]] + bars[i])
            else:
                dp[i][j] = dp[i-1][j]  
    
    for i in dp:
        print(i)
    
    if (dp[n][length] == length):
        print("YES")
    else:
        print("NO")
    