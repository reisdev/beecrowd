from math import sqrt

n = int(input())

while n > 0:
    num = int(input())
    prime = True
    i = 2
    while i <= sqrt(num):
        if(num % i) == 0:
            prime = False
            break
        i += 1

    print('Prime' if prime else 'Not Prime')

    n -= 1
