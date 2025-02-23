s = input()
s = s.upper()
s = s.rjust(len(s) + 1, ' ')
s = s.ljust(len(s) + 1, ' ')
print("Слова, начинающиеся на ЛИ:")
i = 1
while i < len(s)-1:
    if s[i-1] == ' ' and s[i] == 'Л' and s[i + 1] == 'И':
        while s[i] != ' ':
            print(s[i], end = '')
            i +=1
        print()
    i += 1