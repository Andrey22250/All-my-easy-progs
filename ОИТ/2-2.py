a = list()
print("введите кол-во элементов списка")
leng = int(input())
print("Введите элементы:")
for i in range(leng):
    a.append(input())
print("Элементы с длинной < 10:")
for i in range(leng):
    if len(a[i]) < 10:
        print(a[i])

