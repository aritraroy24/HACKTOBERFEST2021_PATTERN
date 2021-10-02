# Diamond pattern in Python

# Reading number of row
row = int(input('Enter number of row: '))

# Upper part of diamond
for i in range(1, row+1):
    for j in range(1,row-i+1):
        print(" ", end="")
    for j in range(1, 2*i):
        print("*", end="")
    print()

# Lower part of diamond
for i in range(row-1,0, -1):
    for j in range(1,row-i+1):
        print(" ", end="")
    for j in range(1, 2*i):
        print("*", end="")
    print()