def all_divisors(n):
    divisors = []
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            divisors.append(i)
            if i != n // i:  # 避免平方數重複
                divisors.append(n // i)
    return sorted(divisors)

n = int(input("輸入一個正整數："))
print(f"{n} 的所有因數為：{all_divisors(n)}")