while True:
    try:
        s = input()
        out = ""
        for i in s:
            if i == "-" or i == "0" or i == "1":
                out += i
            elif i in ["A", "B", "C"]:
                out += "2"
            elif i in ["D", "E", "F"]:
                out += "3"
            elif i in ["G", "H", "I"]:
                out += "4"
            elif i in ["J", "K", "L"]:
                out += "5"
            elif i in ["M", "N", "O"]:
                out += "6"
            elif i in ["P", "Q", "R", "S"]:
                out += "7"
            elif i in ["T", "U", "V"]:
                out += "8"
            elif i in ["W", "X", "Y", "Z"]:
                out += "9" 
        print(out)
    except:
        break