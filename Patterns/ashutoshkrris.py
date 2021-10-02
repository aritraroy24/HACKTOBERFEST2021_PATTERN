name = 'KRISHNA'

for i in range(0, len(name)):
    for j in range(0, len(name)):
        if i == 3:
            print(name[j], end="")
        elif j == 3:
            print(name[i], end="")
        else:
            print(" ", end="")
    print("")
