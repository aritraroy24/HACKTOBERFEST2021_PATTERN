zigzag = int(input('Input zigzag count = '))
n = 10
space = 0

for j in range(zigzag):
    for i in range(n):
        print((' '*space)+('*'*n))
        space += 1

    for i in range(n):
        print((' '*space)+('*'*n))
        space -= 1