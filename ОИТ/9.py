l = [[1, 'ФИО1', 'Возраст1', 'Группа1'], [2, 'ФИО2', 'Возраст2', 'Группа1'], [3, 'ФИО3', 'Возраст2', 'Группа2']]
new_l = {x[0]: x[1:] for x in l}

print(new_l)

n = int(input('Замена #'))
new_l[n] = [input(), int(input()), input()]

print(new_l)