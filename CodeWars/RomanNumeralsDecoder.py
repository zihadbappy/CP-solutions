def solution(roman):
    symbols = ['I','V','X','L','C','D','M']
    values = [1,5,10,50,100,500,1000]
    value_liste = []
    sustract = []
    resultat = 0
   #complete the solution by transforming the roman numeral into an integer$
    for item in roman:
        value_liste.append(
            values[symbols.index(item)]
            )
    element = value_liste[0]
    resultat = element
    for itr in value_liste[1:]:
        if itr <= element:
            resultat += itr
        else:
            sustract.append(element)
            resultat += itr-element
        element = itr
    for j in sustract:
        resultat -= j
    return resultat