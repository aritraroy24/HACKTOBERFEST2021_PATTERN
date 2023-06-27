#pattern for 2 digit numbers

n = int(input("enter number : "))

print('\nHere is your pattern ^-^\n')
row = [n]*(2*n - 1)
length = len(str(n))

def show(row):
    for element in row:
        stringElement = str(element)
        while True:
            if length > len(stringElement):
                stringElement = " " + stringElement
            else: 
                break
        print(stringElement, end=" ")
    print()

for i in range(2*n):
    if n - i > 0:
        for j in range(i, 2*n - 1 - i): row[j] = n - i
        show(row)
    elif i - n:
        for j in range(2*n - 1 - i, i): row[j] = i - n + 1
        show(row)

print()
input("enter any key to exit")
