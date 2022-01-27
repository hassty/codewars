def find_missing(sequence):
    a1 = sequence[0]
    an = sequence[len(sequence) - 1]
    n = len(sequence) + 1
    s = n * (a1 + an) // 2
    actualsum = sum(sequence)
    return s - actualsum