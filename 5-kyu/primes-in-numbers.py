from collections import Counter

def prime_factors(n):
    r = ''
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)

    for number, count in Counter(factors).items():
        if count == 1:
            r += f'({number})'
        else:
            r += f'({number}**{count})'

    return r