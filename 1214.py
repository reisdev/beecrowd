n = int(input())
while n > 0:
    read = input().split()
    sum = 0
    for i in range(1, len(read)):
        sum += int(read[i])

    media = sum/int(read[0])
    quant = 0

    for i in range(1, len(read)):
        if(int(read[i]) > media):
            quant += 1

    result = (quant/int(read[0]))*100
    print('%.3f%%' % result)
    n -= 1
