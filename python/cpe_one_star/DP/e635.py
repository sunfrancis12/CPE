 # DP
cnt = 0
total = 0
num = []
while total <= 10**8:
    total += cnt
    num.append(total)
    cnt += 1

while True:
    n = int(input())
    if n == 0:
        break
    
    for page in range(1, len(num)):
        if num[page] > n:
            print(num[page] - n, page)
            break