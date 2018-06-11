n = int(input())

i = 0

while i < n:
    q = int(input())
    soma = 0
    alg = 1
    for b in range(0, q):
        soma += alg
        alg *= 2
    kg = int((soma/12)/1000)
    print(kg, 'kg')
    i += 1
