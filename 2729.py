from bisect import insort

n = int(input())


def print_array(a):
    for i in range(0, len(a)):
        if i != (len(a)-1):
            print(a[i], end=' ')
        else:
            print(a[i])


i = 0
while i < n:
    items = input().split(' ')
    compras = []
    for each in items:
        temp = list(filter(lambda item: item == each, compras))
        if temp == []:
            insort(compras, each)
    print_array(compras),
    i += 1
