n = int(input())
arr = [0] * n
for i in range(n):
    arr[i] = [0] * n
sum = 0
for i in range(n):
    for j in range(n):
        arr[i][j] = int(input())
        sum += arr[i][j]
print("Сумма:",sum)