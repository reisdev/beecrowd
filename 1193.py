n = int(input())

i = 0

hexa = ['0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'a', 'b', 'c', 'd', 'e', 'f']


def hex_decode(num):
    sum = 0
    end = len(num)-1
    beg = 0
    while end >= 0:
        value = hexa.index(num[beg])
        sum += value * 16**end
        end -= 1
        beg += 1
    return sum


while i < n:
    num, tipo = input().split(' ')

    print('Case %d:' % (i+1))
    if tipo == 'bin':
        print(int(num, 2), 'dec')
        print(format(int(num, 2), 'x'), 'hex')
    elif tipo == 'dec':
        print(format(int(num), 'x'), 'hex')
        print(format(int(num), 'b'), 'bin')
    else:
        print(hex_decode(num), 'dec')
        print(format(hex_decode(num), 'b'), 'bin')
    i += 1
    print()
