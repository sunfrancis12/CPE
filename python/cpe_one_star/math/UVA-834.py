def gcd(a, b, res: list):
    if a == 0 or b == 0:
        return 0
    temp = a // b
    res.append(temp)
    gcd(b, a%b, res)

while True:
    try:
        n, m = map(int, input().split())
        res = []
        gcd(n, m, res)
        s = ",".join(map(str, res[1:]))
        print(f"[{res[0]};{s}]")
    except:
        break