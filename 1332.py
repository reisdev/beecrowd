q = int(input())

palavras = ["one", "two"]

for i in range(0, q):
    palavra = input()

    match = [0, 0]

    if(len(palavra) == 5):
        print(3)
    else:
        for i in range(0, 2):
            for index, l in enumerate(palavra):
                if(l == palavras[i][index]):
                    match[i] += 1
        print(match.index(max(match))+1)
