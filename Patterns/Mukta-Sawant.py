# Inverted Half Pyramid Number Pattern
# Author : Mukta-Sawant
# Github : https://github.com/Mukta-Sawant

num = int(input('Size of pattern: '))

for i in range(num,0,-1):
    for j in range(1,i+1):
        print(j, end=' ')
    print('')