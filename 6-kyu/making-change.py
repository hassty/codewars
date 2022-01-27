def make_change(amount):
    r = []

    for i in {"H": 50, "Q": 25, "D": 10, "N": 5, "P": 1}.items():
        count, amount = divmod(amount, i[1])
        if count > 0:
            r.append((i[0], count))

    return dict(r)