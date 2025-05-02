### 字母處理與自訂排序

n = int(input())
cnt = {}
for _ in range(n):
    s = input()
    for i in s:
        if i.isalpha():
            temp = i.upper()
            if cnt.get(temp) == None:
                cnt[temp] = 0
            cnt[temp] +=1
    
ans = sorted(cnt.items(), key=lambda x: (-x[1], x[0]))
for _ in ans:
    print(_[0],_[1])