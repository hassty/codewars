import numpy

def levenshtein(a, b):
    m, n = len(a) + 1, len(b) + 1
    distances = numpy.zeros((m, n))

    for i in range(m):
        distances[i][0] = i

    for j in range(n):
        distances[0][j] = j
        
    for i in range(1, m):
        for j in range(1, n):
            if (a[i - 1] == b[j - 1]):
                distances[i][j] = distances[i - 1][j - 1]
            else:
                distances[i][j] = min(
                        distances[i][j - 1] + 1,
                        distances[i - 1][j] + 1,
                        distances[i - 1][j - 1] + 1
                )

    return int(distances[len(a)][len(b)])