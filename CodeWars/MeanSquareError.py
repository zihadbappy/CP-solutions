def solution(array_a, array_b):
    somme = 0
    for itr in range(len(array_a)):
        current = [array_a[itr], array_b[itr]]
        somme += (max(current)-min(current))*(max(current)-min(current))
    return somme/len(array_a)
