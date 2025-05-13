dp = [[0 for _ in range(1001)] for _ in range(1001)]

for i in range(1, 1001):
    dp[i][0] = 0
    dp[i][i] = 1
    
for n in range(1, 1001):
    for m in range(1, n):
        dp[n][m] = (m * dp[n-1][m] + dp[n-1][m-1])# % 2

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    print(dp[n][m])
    