def move_zeros(array):
    for item in array:
        if item==0:
            array.pop(array.index(item))
            array.append(item)
    return array