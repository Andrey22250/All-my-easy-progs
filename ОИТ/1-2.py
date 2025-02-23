a = list()
print("Введите кол-во элементов списка")
len = int(input())
print("Введите элементы:")
for i in range(len):
    a.append(int(input()))
print("Нечётные элементы: ")
for i in range(len):
    if a[i] % 2 == 1:
        print(a[i])