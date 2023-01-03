def somme_digit(n):
    if len(str(n)) == 1:
        return int(n)
    return int(str(n)[str(n).index(str(n))])+somme_digit(int(str(n)[str(n).index(str(n))+1:]))


def digital_root(n):
    if len(str(somme_digit(n))) == 1:
        return somme_digit(n)
    return digital_root(somme_digit(n))
