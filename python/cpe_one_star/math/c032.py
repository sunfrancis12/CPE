print("PERFECTION OUTPUT")
while True:
    try:
        n = list(map(int, input().split()))
        for i in n:
            if i == 0:
                print("END OF OUTPUT")
                exit()
            sum = 0
            for j in range(1,i):
                if i%j==0:
                    sum+=j
            if sum == i:
                print(f"{i:5d}  PERFECT")
            elif sum < i:
                print(f"{i:5d}  DEFICIENT")
            else:
                print(f"{i:5d}  ABUNDANT")
    except:
        break
    