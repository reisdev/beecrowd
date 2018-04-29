while True:
    num = input()

    if num == '-1':
        break
    try:
        num = '0x'+format(int(num), 'x').upper()
    except:
        num = int(num, 16)

    print(num)
