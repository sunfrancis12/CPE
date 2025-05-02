num = []
while True:
    try:
        n = int(input())
        num.append(n)
        num.sort()
        length = len(num)
        if length%2==0:
            print(int((num[int(length/2)] + num[int(length/2)-1])/2))
        else:
            print(num[int((length-1)/2)])
    except:
        break