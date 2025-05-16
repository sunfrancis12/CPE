t = int(input())
matrix = {}
for i in range(t):
    a, n, m = input().split()
    matrix[a] = (int(n), int(m))

while True:
    try:
        s = input()
        if len(s) == 1:
            if matrix.get(s) != None:
                print(0)
                continue
            else:
                print("error")
                break
        error = False
        stack = []
        multiplications = 0
        for i in s:
            mat = matrix.get(i)
            if mat != None:
                stack.append(mat)
            elif i == ")" or i == "(":
                stack.append(i)
            else:
                print("error")
                error = True
                break

            if i == ")":
                obj = stack.pop()
                temp = (0, 0)
                while obj != "(":
                    obj = stack.pop()
                    if obj == "(":
                        break
                    temp = stack.pop()
                    #print(obj, temp)
                    if temp[1] == obj[0]:
                            multiplications += temp[0] * temp[1] * obj[1]
                            temp = (temp[0], obj[1])
                    else:
                        error = True
                        break
                    if len(stack) == 0 or error:
                        error = True
                        break
                stack.append(temp)
            if error:
                print("error")
                break
        if not error:
            print(multiplications)
    except:
        break