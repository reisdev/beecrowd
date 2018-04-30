while True:
    n1, n2 = input().split(' ')

    carry = 0
    n1 = int(n1)
    n2 = int(n2)

    if n1 == 0 and n2 == 0:
        break
    r = 0
    while n1 > 0 or n2 > 0:
        t1 = n1 % 10
        t2 = n2 % 10
        n1 = n1 // 10
        n2 = n2 // 10
        sum = t1+t2+r
        if sum > 9:
            carry += 1
            r = 1
        else:
            r = 0

    if carry == 0:
        print('No carry operation.')
    elif carry == 1:
        print('1 carry operation.')
    else:
        print('%d carry operations.' % carry)
