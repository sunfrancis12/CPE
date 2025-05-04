while True:
    h, u, d, f = map(int, input().split())
    if h==0:
        break
    day = 1
    height = 0
    energy = u
    while True:
        height += energy
        if height > h:
            break
        height -= d
        if height < 0:
            break
        energy = energy - (u * 0.01 * f)
        if energy < 0:
            energy = 0
        day += 1
    if height > h:
        print(f"success on day {day}")
    else:
        print(f"failure on day {day}")