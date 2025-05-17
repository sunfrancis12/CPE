t = int(input())
for _ in range(t):
    s = list(map(int, input().split()))
    n = s[0]
    s = s[1:]
    if n == 1:
        print(1)
        continue
    ans = 1
    high = True # 現在處於高點
    low = False #現在處於低點
    current = True #現在處於高還低
    for i in range(1,n):
        if current == high:
            if s[i-1] > s[i]:
                ans += 1
                current = low    
        else:
            if s[i-1] < s[i]:
                ans += 1
                current = high
    print(ans)

#參考自: https://blog.iddle.dev/public/2023/03/22/Python-UVa-11240-Antimonotonicity/