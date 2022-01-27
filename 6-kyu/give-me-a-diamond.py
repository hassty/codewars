def diamond(n):
    if n <= 0 or n % 2 == 0:
        return None

    lengths = range(1, n, 2)
    stars = lambda lengths, max_length: ''.join([('*' * i).center(max_length).rstrip() + '\n' for i in lengths])
    return stars(lengths, n) + '*' * n + '\n' + stars(lengths[::-1], n)