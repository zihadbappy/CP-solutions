def valid_parentheses(string):
    contour = 0
    if string[:1] == ')' or string[-1:] == '(':
        return False
    for item in string:
        if contour < 0:
            return False
        if item == '(':
            contour += 1
        if item == ')':
            contour -= 1
    if contour == 0:
        return True
    return False
