directions = {
    0: [0,1],
    90: [1,0],
    180: [0,-1],
    270: [-1,0],
    'N': 0,
    'E': 90,
    'S': 180,
    'W': 270
}

angles = {
    0: 'N',
    90: 'E',
    180: 'S',
    270: 'W'
}

scent = {}

try:
    len_x, len_y = map(int, input().split())
    while True:
        try:
            idx_x, idx_y, direction = input().split()
            idx_x, idx_y = int(idx_x), int(idx_y)
            angle = directions.get(direction)

            s = input()
            lost = False
            for i in s:
                if(i == 'F'):
                    new_x, new_y = idx_x, idx_y
                    temp_x, temp_y = map(int, directions.get(angle))
                    new_x += temp_x
                    new_y += temp_y
                    if(new_x > len_x or new_y > len_y or new_x<0 or new_y<0):
                        if scent.get(f"{idx_x,idx_y}"):
                            continue
                        else:
                            scent[f"{idx_x,idx_y}"] = True
                            print(idx_x,idx_y,direction,"LOST")
                            lost = True
                            break
                    else:
                        idx_x, idx_y = new_x, new_y
                else:
                    if(i=='R'):
                        angle = (angle+90)%360
                    else:
                        angle = (angle-90)%360  
                    
                    direction = angles.get(angle)
            if not lost:
                print(idx_x, idx_y, direction)
        except:
            break
except:
    pass
            