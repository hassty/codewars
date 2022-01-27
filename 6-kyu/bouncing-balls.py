def bouncing_ball(h, bounce, window):
    if h < window < 0 or not 0 < bounce < 1:
        return -1

    i = -1
    while h > window:
        i += 2
        h *= bounce
    return i