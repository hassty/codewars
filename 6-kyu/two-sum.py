def two_sum(numbers, target):

    for i in range(len(numbers)):
        x=target-numbers[i]
        if x in numbers and numbers.index(x)!=i:
            return (i,numbers.index(x))