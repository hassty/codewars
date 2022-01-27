import math

def squared_divisors(n):
    r = []
    i = 1

    while i <= math.sqrt(n):
        if n % i == 0:
            r.append(i ** 2)
            if n // i != i:
                r.append((n // i) ** 2)
        i += 1

    return r


def list_squared(m, n):
    r = []
    
    for i in range(m, n + 1):
        s = sum(squared_divisors(i))
        if math.sqrt(s).is_integer():
            r.append([i ,s])

    return r