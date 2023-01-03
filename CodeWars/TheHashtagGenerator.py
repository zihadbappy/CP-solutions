def generate_hashtag(s):
    #your code here
    if len(s) == 0:
        return False
    data = s.split(' ')
    for item in data:
        if len(item) != 0:
            data[data.index(item)] = item.capitalize()
    result = '#'+''.join(data)
    if len(result) >= 140:
        return False
    return result