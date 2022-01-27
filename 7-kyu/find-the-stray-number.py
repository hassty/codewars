def stray(arr):
    return next(filter(lambda i: arr.count(i) == 1, arr))