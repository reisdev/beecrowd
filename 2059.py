p, j1, j2, r, a = input().split(' ')

n = int(j1)+int(j2)

ganhador = 0
if r == '1':
    if a == '1':
        ganhador = 2
    else:
        ganhador = 1
elif p == '1':
    if n % 2 == 0:
        ganhador = 1
    else:
        ganhador = 2
elif p == '0':
    if n % 2 != 0:
        ganhador = 1
    else:
        ganhador = 2

print('Jogador 1 ganha!' if ganhador == 1 else 'Jogador 2 ganha!')
