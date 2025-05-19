month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]

# 4/4 124 - 139
# 1/1 = Sat

t = int(input())
for _ in range(t):
    m, d = map(int, input().split())
    day = d
    for i in range(m):
        day += month[i]
    ans = (day - 1 + 5)%7
    print(week[ans])