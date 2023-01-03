def pig_it(text):
    array = text.split(' ')
    for element in array:
        current_element = list(element)
        if not current_element[0] in ['!', '?']:
            current_element.append(current_element[0])
            current_element.pop(0)
            current_element.append("ay")
            array[array.index(element)] = ''.join(current_element)
    return ' '.join(array)