arr = [0] * 10
count = 0
print("Введите список:")
for i in range(10):
    arr[i] = int(input())
for i in range(10):
    if arr[i] % 2 == 0:
        arr[i] = 0
        count += 1
print("Введите новые элементы: ")
for i in range(count):
    arr.remove(0)
arr.append(int(input()))
arr.append(int(input()))
print("Список:",arr)
