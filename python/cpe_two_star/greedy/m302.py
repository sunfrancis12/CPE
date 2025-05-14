t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    
    # find k 
    right = n-1
    left = 0
    while right >= left:
        mid = (right+left)//2 #k的值
        # print(mid)
        # print(left, right)
        x = n - mid
        if m - mid <= x*(x-1)//2:
            left = mid + 1
        else:
            right = mid - 1
    k = right
    print(k)
    

# 引用自: https://gdst.dev/posts/UVA-12428/