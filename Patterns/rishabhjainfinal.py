length = 21

for i in range(length):
    for j in range(length):
        if (i == j):
            print('*', end="")
        elif (i == length-1-j):
            print('*', end="")
        elif (j == length//2 and i > length//10 and i < 0.9*length ):
            print('*', end="")
        else: 
            print(' ', end="")
    print(' ')
