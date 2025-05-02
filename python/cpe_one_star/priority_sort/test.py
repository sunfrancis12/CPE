#使用tuple: zip(a,b)
#自訂排序: 
from functools import cmp_to_key

def cmp(a, b):
    return b - a

a = [1,4,5,6,3,8,6,0,7,8]
print(sorted(a, key=cmp_to_key(cmp))) #return為負數會交換，因此b會在a的前面
#[8, 8, 7, 6, 6, 5, 4, 3, 1, 0]