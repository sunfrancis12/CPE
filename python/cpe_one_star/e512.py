while True:
    try:
        x1, y1, x2, y2, x3, y3, x4, y4 = map(float, input().split())
        
        if x1==x3 and y1==y3:
            mid_x = (x2 + x4)/2
            mid_y = (y2 + y4)/2
            four_x = 2 * mid_x - x1
            four_y = 2 * mid_y - y1
        elif x1==x4 and y1==y4:
            mid_x = (x2 + x3)/2
            mid_y = (y2 + y3)/2
            four_x = 2 * mid_x - x1
            four_y = 2 * mid_y - y1
        elif x2==x3 and y2==y3:
            mid_x = (x1 + x4)/2
            mid_y = (y1 + y4)/2
            four_x = 2 * mid_x - x2
            four_y = 2 * mid_y - y2
        elif x2==x4 and y2==y4:
            mid_x = (x1 + x3)/2
            mid_y = (y1 + y3)/2
            four_x = 2 * mid_x - x2
            four_y = 2 * mid_y - y2
        print(f"{four_x:.3f}",f"{four_y:.3f}")
    except:
        break