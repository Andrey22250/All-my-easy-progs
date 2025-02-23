def sumstr(array):
    sum = 0
    for i in range(8):
        sum = 0
        for j in range(8):
            sum += a[i][j]
        print("Сумма элементов", i + 1, "строки =", sum)

def sumcol(array):
    sum = 0
    for j in range(8):
        sum = 0
        for i in range(8):
            sum += a[i][j]
        print("Сумма элементов", j + 1, "столбца =", sum)

def sumstreven(array):
    sum = 0
    for i in range(8):
        sum = 0
        for j in range(8):
            if a[i][j] % 2 == 0:
                sum += a[i][j]
        print("Сумма четных элементов", i + 1, "строки =", sum)

def sumcoleven(array):
    sum = 0
    for i in range(8):
        sum = 0
        for j in range(8):
            if a[j][i]%2==0:
                sum +=a[j][i]
        print("Сумма четных элементов", i + 1, "столбца =", sum)


a = {}
a[0] = [1, 2, 3, 4, 5, 6, 7, 8]
a[1] = [8, 7, 6, 5, 4, 3, 2, 1]
a[2] = [2, 3, 4, 5, 6, 7, 8, 9]
a[3] = [9, 8, 7, 6, 5, 4, 3, 2]
a[4] = [1, 3, 5, 7, 9, 7, 5, 3]
a[5] = [3, 1, 5, 3, 2, 6, 5, 7]
a[6] = [1, 7, 5, 9, 7, 3, 1, 5]
a[7] = [2, 6, 3, 5, 1, 7, 3, 2]
for i in range(8):
    print(a[i])
sumstr(a)
sumcol(a)
sumstreven(a)
sumcoleven(a)
