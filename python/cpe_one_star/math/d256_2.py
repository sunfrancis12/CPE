gcds = {}

def gcd(a, b):
    if gcds.get(f"{a},{b}"):
        return gcds.get(f"{a},{b}")
    if b % a == 0:
        gcds[f"{a},{b}"] = a
    else:
        temp = gcds.get(f"{a},{b-1}")
        gcds[f"{a},{b}"] = temp
        return temp
        

while True:
    try:
        n = int(input())
        if n==0:
            break
        
        gcds = {
            "1,1": 1
        }
        
        g = 0
        for i in range(1,n):
            for j in range(i+1,n+1):
                print(i,j)
                g += gcd(i,j)
        print(g)
    except:
        break
    

# for i in range(1,n):
#             for j in range(i+1,n+1):
#                 gcd = 1
#                 #gcd
#                 for k in range(1,i+1):
#                     if j%k==0 and i%k==0:
#                         gcd = k
#                 g += gcd
#         print(g)