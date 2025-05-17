t = int(input())
for _ in range(t):
    land = []
    m = int(input())
    while m != 0:
        land.append(m)
        m = int(input())
    land.sort(reverse=True)
    prize = 0
    for i in range(len(land)):
        prize += 2 * land[i]**(i+1)
    if prize < 5000000:
        print(prize)
    else:
        print("Too expensive")