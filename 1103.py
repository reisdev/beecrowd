f = open('1103result.txt', 'w')
while True:
    h1, m1, h2, m2 = input().split(' ')

    if int(h1) == 0 and int(h2) == 0 and int(m1) == 0 and int(m2) == 0:
        break

    ht = int(h2) - int(h1)
    mt = int(m2) - int(m1)

    if ht < 0:
        ht = 24 - abs(ht)
    elif h1 == h2:
        if mt < 0:
            mt = -mt

    print((ht*60)+mt)
    f.write(str((ht*60)+mt)+'\n')

f.close()
