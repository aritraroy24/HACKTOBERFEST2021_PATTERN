rows = 5

k = 2 * rows - 2

for i in range(rows):

    for _ in range(k):

        print(" ", end="")

    k = k - 1

    print("*", end="")

    for _ in range(i*2):

        print(" ", end="")

    print("*")

k = rows - 2

for i in range(rows, -1, -1):

    for j in range(k, 0, -1):

        print(" ",end="")

    k = k + 1

    print("*", end="")

    for _ in range((i)*2):

        print(" ", end="")

    print("*")
