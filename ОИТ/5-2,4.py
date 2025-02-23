x = open("students5.csv", 'r+', encoding='utf-8')
arr = [row.strip() for row in x]
for i in range(6):
    arr[i] = arr[i].split(';')
for j in range(6):
    for i in range(5):
        if arr[i][1] > arr[i + 1][1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]
print("Список, отсортированный по возрасту:")
for i in range(6):
    print(arr[i][0], arr[i][1], arr[i][2])
m = int(arr[0][1])
for i in range(6):
    if int(arr[i][1]) < m:
        m = int(arr[i][1])
while m > 0:
    print("Введите 1, чтобы уменьшить возраст всех студентов на 1 год")
    if int(input()) == 1:
        m -= 1
        for i in range(6):
            arr[i][1] = int(arr[i][1]) - 1
        print("Список с уменьшенными возрастами:")
        for i in range(6):
            print(arr[i][0], arr[i][1], arr[i][2])
        x.seek(0)
        for i in range(6):
            for j in range(3):
                x.write(str(arr[i][j]))
                x.write(';')
            x.write('\n')
        x.close()
    else:
        x.close()
        exit()

