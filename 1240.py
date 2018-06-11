n = int(input())

while n > 0:
    a, b = input().split(' ')

    if a.endswith(b):
        print('encaixa')
    else:
        print('nao encaixa')
    n -= 1
