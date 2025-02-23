a = list()
print("Введите кол-во элементов списка")
len = int(input())
print("Введита числа: ")
for i in range(len):
    a.append(int(input()))
print("Минимальное число:",min(a))
