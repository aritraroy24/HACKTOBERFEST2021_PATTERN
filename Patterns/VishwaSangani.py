rows = i = 6
while i>=0:
    for j in range(5, rows-i, -1):
        print(j, end=" ")
    for j in range(rows-i+1, rows):
        print(j, end=" ")
    print()
    i = i - 1