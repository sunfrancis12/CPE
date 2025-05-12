while True:
    try:
        x1, y1, x2, y2, x3, y3, x4, y4 = map(float, input().split())
        
        mid_x = (x1 + x4)/2
        mid_y = (y1 + y4)/2
        four_x = 2 * mid_x - x2
        four_y = 2 * mid_y - y2
        print(f"{four_x:.3f}",f"{four_y:.3f}")
    except:
        break