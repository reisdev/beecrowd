while True:
    total = 0
    lidos = 0

    while lidos < 2:
        valor = float(input())

        if(valor >= 0 and valor <= 10):
            total = total + valor
            lidos += 1
        else:
            print("nota invalida")

    print("media = %.2f" % (total/2))

    o = -1
    while o != 1 and o != 2:
        print("novo calculo (1-sim 2-nao)")
        o = int(input())

    if(o == 2):
        break
