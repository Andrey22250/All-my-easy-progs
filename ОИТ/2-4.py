str = input()
res = ' '.join([i for i in str if not i.isdigit()])
print(res)
