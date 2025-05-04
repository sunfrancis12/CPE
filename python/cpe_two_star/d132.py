cnt = 1
while True:
    n = int(input())
    if n == 0:
        break
    print(f"Game {cnt}:")
    ans = list(map(int, input().split()))
    while True:
        temp = ans.copy()
        guess = list(map(int, input().split()))
        if max(guess) == 0:
            break
        a = 0
        b = 0
        try_a = 0
        for i in range(len(ans)):
            if guess[i] == temp[i]:
                guess[i] = "*"
                temp[i] = "*"
                a+=1
        # print("after a: ",temp)
        for i in range(len(ans)):
            # print("guess",guess)
            # print("temp",temp)
            if guess[i] == "*":
                continue
            if guess[i] in temp:
                temp[temp.index(guess[i])] = "*"
                guess[i] = "*"
                b += 1
        print(f"({a},{b})".rjust(9))
    cnt += 1
                    