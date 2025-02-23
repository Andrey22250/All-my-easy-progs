from math import *
print('Введите а: ')
a=int(input())
print('Введите b: ')
b=int(input())
print('Введите c: ')
c=int(input())
print('Введите d: ')
d=int(input())
print('Введите k: ')
k=int(input())
if a*b==0:
    print("Деление на 0. Повторите попытку")
else:
    print('Результат: ', abs((a**2-b**3-c**3*a**2)*(b-c+c*(k-d/b**3))-((k/b-k/a)*c)**2-20000))