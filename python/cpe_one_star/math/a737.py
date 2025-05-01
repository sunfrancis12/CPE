t = int(input())
for _ in range(t):
    #n = int(input())
    n, *s = list(map(int, input().split()))
    s.sort()
    mid = s[int(len(s)/2)]
    sum = 0
    for i in s:
        sum += abs(i-mid)
    print(sum)