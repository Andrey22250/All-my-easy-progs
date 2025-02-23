lst = [[1,"Иванов Иван Иванович",23,"БО-111111" ], [2,"Сидоров Семен Семенович",23,"БО-111111"], [3,"Яшков Илья Петрович",24,"БО-222222"]]
students = {}

for student in lst:
    students[student[0]] = [student[1], student[2], student[3]]
print(students)

fio = input('Введите ФИО студента: ')
student_num = None
for student in students:
    if students[student][0] == fio:
        student_num = student

if student_num is not None:
    new_fio = input('Введите новые ФИО: ')
    students[student_num][0] = new_fio
    student_num = None
else:
    print('Студент с ФИО "{}" не найден'.format(fio))

print(students)

print(*[students[i] for i in students if 1 <= i <= 10])