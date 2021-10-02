def Triangle_Pattern(n):

    k = n - 1   # number of spaces

    for i in range(0, n):  # outer loop for number of rows

        for j in range(0, k):  # inner loop for spaces
            print(end=" ")

        k = k - 1

        for j in range(0, i+1):  # inner loop for number of columns

            print("* ", end="")  # printing stars

        print("\r")


n = 5
Triangle_Pattern(n)
