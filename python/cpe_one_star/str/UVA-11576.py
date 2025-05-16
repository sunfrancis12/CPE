t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    ans = n
    last = ""
    for i in range(m):
        s = input()
        if i == 0:
            last = s
            continue
        l = n - 1
        repeat = False
        while l >= 0:
            if s[l] == last[-1]:
                temp = l
                cnt = -1
                while temp >= 0:
                    if s[temp] != last[cnt]:
                        break
                    if temp == 0:
                        repeat = True
                        break
                    temp -= 1
                    cnt -= 1
                if repeat:
                    ans += (n + cnt)
                    break
            l -= 1
        if not repeat:
            ans += n
        last = s
    print(ans)