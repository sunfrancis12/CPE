n, k = map(int, input().split())
node = list(map(int, input().split()))
node.sort()

def inCover(d):
    cnt = 1
    cover = node[0] + d
    for i in node:
        if i <= cover:
            continue
        cnt += 1
        cover = i + d
        if cnt > k:
            return False
    return True

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

# low = 0 #必定無法成立的
# up = dis//k + 1 #必定可以成立的
# while up - low > 1:
#     mid = (up + low)//2
#     if inCover(mid):
#         up = mid
#     else:
#         low = mid
# print(up)
    


#參考自: https://www.youtube.com/watch?v=-KWUNjCQpbY&ab_channel=%E7%8E%8B%E4%BD%B3%E7%9B%88