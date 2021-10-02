# Pascal's Triangle in Python

def pascal_n(n):
    for i in range(n):
        print(' '*(n-i), end='') #Add Space
        print(' '.join(map(str, str(11**i))))

pascal_n(5)
