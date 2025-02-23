department = [
    {'id': 1, 'name': 'Иностранный язык', 'teachers': 2, 'discipline': [0, 1, 2, 3, 4]},
    {'id': 2, 'name': 'Высшая математика', 'teachers': 5, 'discipline': [5, 6]},
    {'id': 3, 'name': 'Прикладная математика', 'teachers': 11, 'discipline': [7, 8, 9]},
    {'id': 4, 'name': 'Право', 'teachers': 2, 'discipline': [10, 11]},
    {'id': 5, 'name': 'Государственное управление', 'teachers': 15, 'discipline': [12, 13, 14, 15, 16]},
    ]

disciplines = [
    {'id': 1, 'name': 'Английский язык', 'lectures': 0, 'practices': 8, 'course': 0, 'control': 'test'},
    {'id': 2, 'name': 'Немецкий язык', 'lectures': 0, 'practices': 8, 'course': 0, 'control': 'test'},
    {'id': 3, 'name': 'Испанский язык', 'lectures': 0, 'practices': 8, 'course': 0, 'control': 'test'},
    {'id': 4, 'name': 'Русский язык', 'lectures': 0, 'practices': 8, 'course': 0, 'control': 'test'},
    {'id': 5, 'name': 'Французский язык', 'lectures': 0, 'practices': 8, 'course': 0, 'control': 'test'},
    {'id': 6, 'name': 'Математический анализ', 'lectures': 4, 'practices': 4, 'course': 0, 'control': 'exam'},
    {'id': 7, 'name': 'Линейная алгебра', 'lectures': 4, 'practices': 4, 'course': 0, 'control': 'exam'},
    {'id': 8, 'name': 'Программирование', 'lectures': 0, 'practices': 8, 'course': 1, 'control': 'exam'},
    {'id': 9, 'name': 'Теоретические основы информатики', 'lectures': 0, 'practices': 8, 'course': 0, 'control': 'test'},
    {'id': 10, 'name': 'Основы программной инженерии', 'lectures': 0, 'practices': 8, 'course': 0, 'control': 'test'},
    {'id': 11, 'name': 'Право', 'lectures': 8, 'practices': 0, 'course': 1, 'control': 'exam'},
    {'id': 12, 'name': 'Человек в обществе', 'lectures': 8, 'practices': 0, 'course': 0, 'control': 'test'},
    {'id': 13, 'name': 'Муниципальное право', 'lectures': 8, 'practices': 0, 'course': 0, 'control': 'test'},
    {'id': 14, 'name': 'Конституционное право России', 'lectures': 8, 'practices': 0, 'course': 1, 'control': 'exam'},
    {'id': 15, 'name': 'Административное право', 'lectures': 8, 'practices': 0, 'course': 0, 'control': 'test'},
    {'id': 16, 'name': 'Государственная и муниципальная служба', 'lectures': 0, 'practices': 8, 'course': 1, 'control': 'test'},
    {'id': 17, 'name': 'Экологическое право', 'lectures': 8, 'practices': 0, 'course': 0, 'control': 'test'},
]

print("Дисциплины, с формой контроля экзамен и предусматривающие курсовую работу")

for i in range(len(disciplines)):
    if disciplines[i]['course'] == 1 and disciplines[i]['control'] == 'exam':
        print(disciplines[i]['name'])

print("\nКафедры, читающие более 5 или более дисциплин")
for i in range(len(department)):
    if len(department[i]['discipline']) == 5:
        print(department[i]['name'], "читают дисциплин:", len(department[i]['discipline']))

print("\nИнформация о кафедрах с информацией о кафедрах с id 2,3")
for i in range(1, 3):
    print(department[i]['name'])
    print("Читает лекции по:")
    for j in department[i]['discipline']:
        print(disciplines[j]['name'])



