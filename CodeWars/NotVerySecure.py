import string


def alphanumeric(password):
    if ' ' in password or len(password) == 0:
        return False
    upper = string.ascii_uppercase
    lower = string.ascii_lowercase
    number = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    count = 0
    for char in password:
        if char in upper or char in lower or char in number:
            count += 1
    if count == len(password):
        return True
    return False
