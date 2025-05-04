cnt = 1

while True:
    try:
        n = int(input())
        s = list(map(int, input().split()))
        sums = {}
        result = False
        for i in range(n):
            for j in range(i+1):
                if s[i]<s[j] or s[j]<1:
                    result = True
                    break
                sum = s[i] + s[j]
                if sums.get(sum) != None:
                    result = True
                    break
                else:
                    sums[sum] = 1
            if result:
                break
        if result:
            print(f"Case #{cnt}: It is not a B2-Sequence.")
        else:
            print(f"Case #{cnt}: It is a B2-Sequence.")
        print()
        cnt+=1
    except:
        break