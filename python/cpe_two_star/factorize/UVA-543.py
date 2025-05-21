prime = []
def prime_sieve(limit):
    sieve = [True] * (limit + 1)
    sieve[0:2] = [False, False]  # 0 和 1 不是質數
    for i in range(2, int(limit**0.5) + 1):
        if sieve[i]:
            prime.append(i)
            for j in range(i*i, limit + 1, i):
                sieve[j] = False
    return sieve

prime_T = prime_sieve(1000000)
prime.remove(2)

while True:
    n = int(input())
    if n == 0:
        break
    flag = True
    for d in prime:
        m = n - d
        if prime_T[m]:
            print(f"{n} = {d} + {m}")
            flag = False
            break
    if flag:
        print("Goldbach's conjecture is wrong.")