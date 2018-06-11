hexa = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'A', 'B', 'C', 'D', 'E', 'F']

number = int(input())

decoded = ''

while number > 0:
    digit = number % 16
    number = number // 16
    if digit == 0:
        decoded = '0' + decoded
    else:
        decoded = str(hexa[digit]) + decoded

print(decoded)
