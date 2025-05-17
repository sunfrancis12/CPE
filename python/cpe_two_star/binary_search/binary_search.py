node = [1,2,3,4,5,3,632,8,48,3544,436782,34]

# lower bound 最小滿足值
dis = node[-1] - node[0]
left = 1 
right = dis//k + 1 
while left < right:
    mid = (left + right)//2
    if inCover(mid):
        right = mid
    else:
        left = mid + 1
print(right)

# upper 最大滿足值
dis = node[-1] - node[0]
left = 1 
right = dis//k + 1 
while left <= right:
    mid = (left + right)//2
    if inCover(mid):
        right = mid - 1
    else:
        left = mid + 1

print(right)