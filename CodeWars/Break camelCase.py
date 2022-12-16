def solution(s):
    spliting_tab = []
    element = 'A'
    index = []
    alphabet = [
        'A', 'B', 'C', 'D', 'E',
        'F', 'G', 'H', 'I', 'J',
        'K', 'L', 'M', 'N', 'O',
        'P', 'Q', 'R', 'S', 'T',
        'U', 'V', 'W', 'X', 'Y',
        'Z']
    contour = 0
    for itm in s:
        if itm in alphabet:
            index.append(contour)
        contour += 1
    element = 0
    index.append(len(s))
    for i in index:
        spliting_tab.append(s[element:i])
        element = i
    return ' '.join(spliting_tab)
