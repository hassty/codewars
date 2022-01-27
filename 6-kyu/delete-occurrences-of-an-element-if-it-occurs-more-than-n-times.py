def delete_nth(order,max_e):
    r = []
    for i in order:
        if r.count(i) < max_e: r.append(i)
    return r
    # code here