# 因數分解

while True:
    n = int(input())
    if n==0:
        break
    sum = 0
    for i in range(1,int(n**0.5)+1):
        if n%i==0:
            sum +=1
            if i != n // i: #避免平方數重複
                sum +=1 #假如n=36，我們找到一個i=4，則還會有另一個因數9 
    if sum%2==0:
        print("no")
    else:
        print("yes")