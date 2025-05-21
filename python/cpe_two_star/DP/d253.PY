dp = [[0 for _ in range(7489 + 1)] for _ in range(5)]
coin = [1,5,10,25,50]
for i in range(7489 + 1):
    dp[0][i] = 1
for i in range(1,5):
    dp[i][0] = 1
    for j in range(1, 7489 + 1):
        if j >= coin[i]:
            dp[i][j] = dp[i][j - coin[i]] + dp[i-1][j]
        else:
            dp[i][j] = dp[i-1][j]

while True:
    try:
        n = int(input())
        if n == 0:
            print(1)
            continue
        print(dp[4][n])
    except:
        break