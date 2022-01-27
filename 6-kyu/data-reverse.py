def data_reverse(data):
    size = 8
    reversed_data = [data[i:i + size] for i in range(0, len(data), size)][::-1]
    return [item for sublist in reversed_data for item in sublist]