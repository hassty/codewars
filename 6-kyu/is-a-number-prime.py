def is_prime(num):
    if num <= 3: return num > 1
    if num % 2 == 0 or num % 3 == 0: return False
    i = 5
    while i**2 <= num:
        if num % i == 0 or num % (i+2) == 0: return False
        i += 6
    return True