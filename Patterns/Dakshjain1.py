row = int(input("Enter number of rows: "))

print("Generated Hourglass Pattern is: ")

for i in range(row, 0, -1):
    for j in range(row-i):
        print(" ", end="")
    for j in range(1, 2*i):
        print("*", end="")
    print()

for i in range(2, row+1):
    for j in range(row-i):
        print(" ", end="")
    for j in range(1, 2*i):
        print("*", end="")
    print()