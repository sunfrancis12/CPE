while True:
    try:
        s = input()
        base = 1
        sum = 0
        for i in s:
            temp = 0
            if i.isalnum():
                if i.isnumeric():
                    base = max(base, int(i))
                    temp = int(i)
                elif i.isupper():
                    base = max(base, ord(i) - ord('A') + 10)
                    temp = ord(i) - ord('A') + 10
                elif i.islower():
                    base = max(base, ord(i) - ord('a') + 10 + 26)
                    temp = ord(i) - ord('a') + 10 + 26
            else:
                continue
            sum += temp
        for ans in range(base,62):
            if sum % ans == 0:
                print(ans + 1)
                break
        else:
            print("such number is impossible!")
    except:
        break