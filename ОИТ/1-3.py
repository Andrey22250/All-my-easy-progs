a = list()
sum = 0
print("Введите кол-во элементов списка")
len = int(input())
print("Введите элементы:")
for i in range(len):
    a.append(input())
for i in range(len):
    if 0 < int(a[i]) < 11:
        sum = sum + int(a[i])
print("Результат:", sum)