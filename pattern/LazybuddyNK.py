print("Inverted Half Pyramid:")

for i in range(7):
    print(" " * i, "*" * (6 - i))


print("Half Pyramid:")

for i in range(7):
    print(" " * (6 - i), "*" * i)


print("\n\nInverted Full Pyramid:\n\n")

for i in range(7):
    print(" " * i, "* " * (6 - i))


print("Full Pyramid:")

for i in range(7):
    print(" " * (6 - i), "* " * i)


print("Hollow Full Pyramid:")

for i in range(6):
    for j in range(6 - i):
        print(" ", end="")  # printing space required and staying in same line

    for j in range(2 * i + 1):
        if j == 0 or j == 2 * i or i == 6 - 1:
            print("*", end="")
        else:
            print(" ", end="")
    print()  # printing new line


print("Hollow Full Inverted Pyramid:")

print("*" * 11)
for i in range(6 - 1, 0, -1):
    for j in range(1, 6 - i + 1):
        print(" ", end="")
    for j in range(1, 2 * i):
        if j == 1 or j == 2 * i - 1:
            print("*", end="")
        else:
            print(" ", end="")
    print()
