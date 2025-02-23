d = {'a':11, 'b':22, 'c':33, 'd':44}
print(len(d))

import csv
with open('students.csv', encoding='utf-8') as csvfile:
    supList = [data.strip().split(';') for data in csvfile.readlines()]
    for res in sorted(supList, key=lambda x: x[2]):
        print(' '.join(res))
for value in supList[1:]:
    value[2] = int(value[2]) - 1
    value[2] = str(value[2])
print("\nУменьшенный возраст:")
for res in sorted(supList, key=lambda x: x[2]):
    print(' '.join(res))

with open('students1.csv', "w", newline='', encoding='utf-8') as csvfile:
    for res in supList:
        csvfile.write(';'.join(res) + "\n")