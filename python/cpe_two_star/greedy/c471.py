from functools import cmp_to_key

def cmp(a, b):
    return a[0]*b[1] - b[0]*a[1]

n = int(input())
w = list(map(int, input().split()))
f = list(map(int, input().split()))
s = list(zip(w,f))
s.sort(key=cmp_to_key(cmp))
energy = 0
sum = 0
for i in range(1,n):
    sum += s[i-1][0]
    energy += s[i][1] * sum
print(energy)