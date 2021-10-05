rows = int(input('Enter the number row > '))
for i in range(0, rows):
    for j in range(rows - 1, i, -1):
        print('*', '', end='')
    for l in range(i):
        print('    ', end='')
    for k in range(i + 1, rows):
        print('*', '', end='')
    print('\n')
