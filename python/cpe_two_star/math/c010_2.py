#使用二分搜的解法
num, l = [], 0
while True:
    try:
        t = int(input())
        num.append(t)
        l+=1
        left = 0
        right = l-1
        while left < right:
            mid = (left+right) // 2
            if num[mid] > t:
                right = mid
            else:
                left = mid + 1
        num.insert(left, t)
        if l%2==0:
            print((num[l//2] + num[l//2-1]) // 2)
        else:
            print(num[l//2])
    except:
        break