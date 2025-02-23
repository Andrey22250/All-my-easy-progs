# -*- coding: utf-8 -*-

ANIMAL_PART = 'Animals/animal.csv'
FOOD_PART = 'Animals/food.csv'

def input_with_limits(start, end, message = 'Ваш выбор: '):
    number = -1
    while True:
        number = int(input(message))
        if number >= start and number <= end:
            break
    return number

def input_animal(path):
    animal=[]
    file = open(path)
    for line in file:
        str = line.split(';')
        str[-1] = str[-1][::-1]
        dictionar = dict(
            _id = int(str[0]),
            kl = str[1],
            age = int(str[2]),
            sex = str[3],
            ID_food = int(str[4]),
            type_an = str[5]
        )
        animal.append(dictionar)
    file.close()
    return animal

def input_food(path):
    food=[]
    file = open(path)
    for line in file:
        str = line.split(';')
        str[-1] = str[-1][::-1]
        dictionary = dict(
            _id=int(str[0]),
            type=str[1],
            corp=str[2],
            price=int(str[3]),
            name=str[4]
        )
        food.append(dictionary)
    file.close()
    return food

def pust_animal(data, path = ANIMAL_PART):
    file = open(path, 'w')
    for elem in data:
        file.write(
            str(elem['_id'])+';'+
            elem['kl']+';'+str(elem['age'])+';'+
            elem['sex']+';'+str(elem['ID_food'])+';'+
            elem['type_an']+';'+'\n')
    file.close()

def push_food(data, path = FOOD_PART):
    file = open(path, 'w')
    for elem in data:
        file.write(
            str(elem['_id']) + ';' +
            elem['type'] + ';' + elem['corp'] + ';' +
            str(elem['price']) + ';' +
            elem['name'] + ';' + '\n')
    file.close()

def table_choice(message = 'Выберите таблицу:'):
    print(message)
    print('1. Таблица животных')
    print('2. Таблица корма')
    choice = input_with_limits(1, 2)
    return choice

def confirm(message = 'Вы уверены, что хотите этого?'):
    print(message)
    print('1. Да\n2. Нет')
    choice = input_with_limits(1, 2)
    return choice

def input_animal_by_id(animal, animal_id):
    for i in range(len(animal)):
        if animal[i]['_id'] == animal_id:
            return animal[i]['kl']
    return 'Не определено'

def input_food_by_id(food, food_price):
    for i in range(len(food)):
        if food[i]['_id']==food_price:
            return food[i]['price']
    return 'Не определено'

while True:
    animals = input_animal(ANIMAL_PART)
    food = input_food(FOOD_PART)
    print('Животные')
    print('Выберите режим работы:')
    print('0. Выход из программы')
    print('1. Добавление данных')
    print('2. Изменение данных')
    print('3. Удаление данных')
    print('4. Вывод таблиц')
    print('5. Вывод животных: Кличка, пол, возраст, название корма, цена корма')
    print('6. Количество животных, питающихся определённым кормом')
    choice = input_with_limits(0, 6)
    match choice:
        case 0:
            print('Выход из программы')
            exit()
        case 1:
            print('Добавление данных')
            match table_choice('Данные в какую таблицу вы хотите добавить?'):
                case 1:
                    max_id = max([animals[i]['_id'] for i in range(len(animals))])
                    animal = input('Введите кличку нового животного: ')
                    age_a = input('Введите возраст: ')
                    sex = input('Введите пол: ')
                    print('Введите номер корма животного: ')
                    for i in food:
                        print(i)
                    while True:
                        food_id = int(input('Ваш выбор: '))
                        if food_id in [food[i]['_id'] for i in range(len(food))]:
                            break
                    type_an = input('Введите тип животного: ')
                    dictionary = dict(
                        _id = max_id+1,
                        kl = animal,
                        age = age_a,
                        sex = sex,
                        ID_food = food_id,
                        type_an = type_an
                    )
                    animals.append(dictionary)
                    pust_animal(animals)
                case 2:
                    max_id = max([food[i]['_id'] for i in range(len(food))])
                    type = input('Введите тип корма: ')
                    corp = input('Введите компанию: ')
                    price = input('Введите цену корма: ')
                    name = input('Введите название корма: ')
                    dictionary = dict(
                        _id = max_id + 1,
                        type = type,
                        corp = corp,
                        price = price,
                        name = name,
                    )
                    food.append(dictionary)
                    push_food(food)
            print('Данные успешно добавлены')
        case 2:
            match table_choice('Выберите таблицу, строку которой вы желаете изменить: '):
                case 1:
                    show_chs = confirm('Показать таблицу животных?')
                    if show_chs == 1:
                        print("Таблица животных")
                        for i in animals:
                            print(i)
                    change_id = 0
                    while True:
                        change_id = int(input('Введите id строки, данные которой вы хотите изменить: '))
                        if change_id not in [animals[i]['_id'] for i in range(len(animals))]:
                            break
                        print('Какое поле выбранной строки вы хотите изменить?')
                        print('1. Кличка')
                        print('2. Возраст')
                        print('3. Пол')
                        print('4. Номер корма')
                        print('5. Тип живтоного')
                        change_ans = input_with_limits(1, 5)
                        match change_ans:
                            case 1:
                                name = input('Введите новую кличку: ')
                                animals[change_id]['name'] = name
                                break
                            case 2:
                                age = int(input('Введите новый возраст: '))
                                for i in range(len(animals)):
                                    if animals[i]['_id'] == change_id:
                                        animals[i]['age'] = age
                            case 3:
                                sex = input('Введите пол: ')
                                for i in range(len(animals)):
                                    if animals[i]['_id'] == change_id:
                                        animals[i]['sex'] = sex
                            case 4:
                                print('Выберите номер корма:')
                                food_id = 0
                                for i in food:
                                    print(i)
                                while True:
                                    food_id = int(input('Ваш выбор: '))
                                    if food_id in [food[i]['_id'] for i in range(len(food))]:
                                        break
                                for i in range(len(animals)):
                                    if animals[i]['_id'] == change_id:
                                        animals[i]['cathedral_id'] = food_id
                            case 5:
                                type_an = input('Введите пол: ')
                                for i in range(len(animals)):
                                    if animals[i]['_id'] == change_id:
                                        animals[i]['sex'] = type_an
                        pust_animal(animals)
                case 2:
                    show_chs = confirm('Показать таблицу корма?')
                    if show_chs == 1:
                        print("Таблица животных")
                        for i in food:
                            print(i)
                    change_id = 0
                    while True:
                        change_id = int(input('Введите id строки, данные которой вы хотите изменить: '))
                        if change_id not in [food[i]['_id'] for i in range(len(food))]:
                            break
                        print('Какое поле выбранной строки вы хотите изменить?')
                        print('1. Тип корма')
                        print('2. Компания')
                        print('3. Цена')
                        print('4. Название')
                        change_ans = input_with_limits(1, 4)
                        match change_ans:
                            case 1:
                                type = input('Введите тип корма: ')
                                for i in range(len(food)):
                                    if food[i]['_id'] == change_id:
                                        food[i]['type'] = type
                            case 2:
                                corp = input('Введите компанию: ')
                                for i in range(len(food)):
                                    if food[i]['_id'] == change_id:
                                        food[i]['corp'] = corp
                            case 3:
                                price = int(input('Введите цену: '))
                                for i in range(len(food)):
                                    if food[i]['_id'] == change_id:
                                        food[i]['price'] = price
                            case 4:
                                name = input('Введите название корма: ')
                                for i in range(len(food)):
                                    if food[i]['_id'] == change_id:
                                        food[i]['type'] = name
                        push_food(food)
            print('Изменения успешно проведены')
        case 3:
            print('Удаление данных')
            match table_choice('Выберите таблицу, из которой вы желаете удалить строку: '):
                case 1:
                    show_ans = confirm('Показать таблицу животных?')
                    if show_ans == 1:
                        print('Таблица должностей')
                        for i in animals:
                            print(i)
                    delete_id = 0
                    while True:
                        delete_id = int(input('Введите id строки, которую хотите удалить: '))
                        if delete_id != 1 and delete_id in [animals[i]['_id'] for i in range(len(animals))]:
                            break
                    for i in range(len(animals)):
                        if animals[i]['_id'] == delete_id:
                            animals.pop(i)
                            break
                    for i in range(len(animals)):
                        if animals[i]['position_id'] == delete_id:
                            animals[i]['position_id'] = 1
                    pust_animal(animals)
                    push_food(food)
                case 2:
                    show_ans = confirm('Показать таблицу кафедр?')
                    if show_ans == 1:
                        print('Таблица кафедр')
                        for i in food:
                            print(i)
                    delete_id = 0
                    while True:
                        delete_id = int(input('Введите id строки, которую хотите удалить: '))
                        if delete_id != 0 and delete_id in [food[i]['_id'] for i in range(len(food))]:
                            break
                    for i in range(len(food)):
                        if food[i]['_id'] == delete_id:
                            food.pop(i)
                            break
                    for i in range(len(animals)):
                        if animals[i]['cathedral_id'] == delete_id:
                            animals[i]['cathedral_id'] = 0
                    pust_animal(animals)
                    push_food(food)
            print('Строка выбранной таблицы была успешно удалена')
        case 4:
            print('Вывод данных')
            match table_choice('Выберите, данные какой таблицы выбрать:'):
                case 1:
                    print('Таблица животных')
                    for i in animals:
                        print(i)
                case 2:
                    print('Таблица корма')
                    for i in food:
                        print(i)
        case 5:
            print('Вывод животных: Кличка, пол, возраст, название корма, цена корма')
            for i in range(len(animals)):
                food_id = animals[i]['ID_food']
                food_price = input_food_by_id(food, food_id)
                to_print = [animals[i]['kl'], animals[i]['sex'], animals[i]['age'], food_id, food_price]
                print(to_print)
        case 6:
            print('Количество животных, питающихся определённым кормом')
            for i in range(len(food)):
                s = 0
                for j in range(len(animals)):
                    if animals[j]['ID_food'] == food[i]['_id']:
                        s+=1
            print('Кол-во животных с кормом "%s": %d' % (food[i]['name'], s))