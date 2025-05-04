l, n = map(int, input().split())
word = {}
count = {}
a = ["a","e","i","o","u"]
spc1 = ["o", "s", "x"]
spc2 = ["ch", "sh"]
for _ in range(l):
    temp1, temp2 = map(str, input().split())
    word[temp1] = temp2
for _ in range(n):
    food = input()
    if word.get(food) != None:
        print(word.get(food))
    elif food[-2:-1] not in a and food[-1:] == "y":
        print(food[:-1] + "ies")
    elif food[-1:] in spc1:
        print(food + "es")
    elif food[-2:] in spc2:
        print(food + "es")
    else:
        print(food + "s")
    