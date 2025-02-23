list = [""] * 3
for i in range(3):
    list[i] = [""] * 4
list[0] = ["ИБ21", "Акулова", "Бабушкина", "Тагаев"]
list[1] = ["ИБ22", "Кротов", "Исып", "Медведь"]
list[2] = ["ИБ23", "Сомов", "Карасев", "Мишкин"]
print(list)
request = input()
for i in range(3):
    if list[i][0] == request:
        print("Студенты группы", list[i][0], ":", list[i][1], list[i][2], list[i][3])
