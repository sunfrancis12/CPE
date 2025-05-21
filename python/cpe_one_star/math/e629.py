#DP
num = [0, 1]
for i in range(2, 1001):
    total = 0
    for j in range(1, int(i**0.5) + 1):
        if i % j == 0:
            if i // j == j:
                total += j
            else:
                total += j + i//j
    num.append(total)

cnt = 0
while True:
    cnt += 1
    n = int(input())
    if n == 0:
        break
    ans = []
    for i in range(1, 1001):
        if num[i] == n:
            ans.append(i)
    if len(ans) > 0:
        print(f"Case {cnt}: {max(ans)}")
    else:    
        print(f"Case {cnt}: -1")
            