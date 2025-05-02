#使用tuple: zip(a,b)
#自訂排序: 
from functools import cmp_to_key
from math import fmod

def cmp(a, b):
        if a[1] == b[1]:
            if a[0]%2 == 1 and b[0]%2==0:
                return -1
            elif b[0]%2 == 1 and a[0]%2==0:
                return 1
            elif a[0]%2 == 1 and b[0]%2==1:
                return b[0] - a[0]
            elif a[0]%2 == 0 and b[0]%2==0:
                return a[0] - b[0]
        else:
            return a[1] - b[1]

while True:
    n, m = map(int, input().split())
    print(n,m)
    if n==0 and m==0:
        break
    list1 = []
    list2 = []
    for _ in range(n):
        x = int(input())
        list1.append(x)
        list2.append(fmod(x,m))
    num = list(zip(list1, list2))
    num.sort(key=cmp_to_key(cmp))
    for i in num:
        print(i[0])