while True:
    try:
        s = list(map(int, input().split()))
        first = True
        if all(x == 0 for x in s):
            print("0")
            continue
        for i in range(9):
            if s[i] == 0:
                continue
            elif i == 7:
                if s[i] > 0:
                    if s[i] == 1:
                        if first:
                            print(f"x",end="")
                            first = False
                        else:
                            print(f" + x",end="")
                    else:
                        if first:
                            print(f"{s[i]}x",end="")
                            first = False
                        else:
                            print(f" + {s[i]}x",end="")
                else:
                    if s[i] == -1:
                        if first:
                            print(f"-x",end="")
                            first = False
                        else:
                            print(f" - x",end="")
                    else:
                        if first:
                            print(f"{s[i]}x",end="")
                            first = False
                        else:
                            print(f" - {abs(s[i])}x",end="")
            elif i == 8: #常數項
                if s[i] > 0:
                    if first:
                        print(f"{s[i]}",end="")
                        first = False
                    else:
                        print(f" + {s[i]}",end="")
                else:
                    if first:
                        print(f"{s[i]}",end="")
                        first = False
                    else:
                        print(f" - {abs(s[i])}",end="")
            elif s[i] > 0:
                if s[i] == 1:
                    if first:
                        print(f"x^{8-i}",end="")
                        first = False
                    else:
                        print(f" + x^{8-i}",end="")
                else:
                    if first:
                        print(f"{s[i]}x^{8-i}",end="")
                        first = False
                    else:
                        print(f" + {s[i]}x^{8-i}",end="")
            else:
                if s[i] == -1:
                    if first:
                        print(f"-x^{8-i}",end="")
                        first = False
                    else:
                        print(f" - x^{8-i}",end="")
                else:
                    if first:
                        print(f"{s[i]}x^{8-i}",end="")
                        first = False
                    else:
                        print(f" - {abs(s[i])}x^{8-i}",end="")
        print()
    except:
        break