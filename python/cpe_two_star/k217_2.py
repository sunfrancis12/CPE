def solve(nums):
    n = len(nums)
    if n == 0:
        return 0

    # 起點總是第一個數
    ans = 1
    prev = nums[0]
    i = 1

    # 初始不知道趨勢，所以從第一個有效的趨勢開始
    while i < n and nums[i] == prev:
        i += 1
    if i == n:
        return ans

    # 方向：True 表示上升, False 表示下降
    up = nums[i] > prev
    ans += 1
    prev = nums[i]
    i += 1

    while i < n:
        if up and nums[i] < prev:
            ans += 1
            up = not up
            prev = nums[i]
        elif not up and nums[i] > prev:
            ans += 1
            up = not up
            prev = nums[i]
        else:
            prev = nums[i]
        i += 1

    return ans

# 主程式
T = int(input())
for _ in range(T):
    arr = list(map(int, input().split()))
    n = arr[0]
    nums = arr[1:]
    print(solve(nums))
