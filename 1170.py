n = int(input())

i = 0

while i < n:
    suprimento = float(input())
    dias = 0
    while suprimento > 1:
        suprimento /= 2
        dias += 1
    print(dias, 'dias')
    i += 1
