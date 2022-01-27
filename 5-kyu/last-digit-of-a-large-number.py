import math

def last_digit(n1, n2):
    n1 = n1 % 10
    if n2 != 0:
         n2 = n2 % 4 + 4
    return (math.pow(n1, n2)) % 10