import os
directory = 'C:/Users/Andrey/Desktop/Политех ноут/Программы/ОИТ'
files = [file for file in os.listdir(directory) if os.path.isfile(f'{directory}/{file}')]
print(len(files))