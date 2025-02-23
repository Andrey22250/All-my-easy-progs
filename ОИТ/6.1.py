def sort(array):
    for j in range(5):
        for i in range(5):
            if arr[i][1] < arr[i + 1][1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]

def age(minage):
    minage -= 1
    for i in range(6):
        arr[i][1] = int(arr[i][1]) - 1
        x.seek(0)
        for i in range(6):
            for j in range(3):
                x.write(str(arr[i][j]))
                x.write(';')
            x.write('\n')

x = open("students5.csv", 'r+', encoding='utf-8')
arr = [row.strip() for row in x]
for i in range(6):
    arr[i] = arr[i].split(';')
print("Если хотите отсортировать по возрасту, введите 1")
print("Если хотите уменьшить возраст, введите 2")
print("Чтобы выйти из программы, введите 0")
s = 10
m = 100
while s != 0:
    s = int(input())
    if s == 1:
        sort(arr)
        print("Список, отсортированный по возрасту:")
        for i in range(6):
            print(arr[i][0], arr[i][1], arr[i][2])
        print("\nЧтобы вывести список, введите 1")
        print("Если хотите уменьшить возраст, введите 2")
        print("Чтобы выйти из программы, введите 0")
    elif s == 2:
        for i in range(6):
            if int(arr[i][1]) < m:
                m = int(arr[i][1])
        if m > 1:
            age(m)
            for i in range(6):
                print(arr[i][0], arr[i][1], arr[i][2])
            print("\nЧтобы вывести список, введите 1")
            print("Если хотите уменьшить возраст, введите 2")
            print("Чтобы выйти из программы, введите 0")
        else:
            print("Некуда уменьшать возраст")
            exit()
    s = 10
x.close()