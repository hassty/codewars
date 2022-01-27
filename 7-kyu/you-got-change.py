def give_change(amount): 
    bills = [100, 50, 20, 10, 5, 1]
    result = []

    for bill in bills:
        count = amount // bill
        amount -= count * bill
        result.append(count)
        
    return tuple(result[::-1])