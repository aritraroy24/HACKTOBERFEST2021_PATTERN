def pattern(n):
    num = 5
    num_ascc = 65
    for i in range(0, n):
        num = 5
        for j in range(0, i+1):
            ch = chr(num_ascc)
            print(num, ch, end=" ")
            num = num + 5
        print("\r")
    k = 5*n - 3
    for i in range(0, n):
        for j in range(0, k):
            print(end=" ")
        k = k - 5
        for j in range(0, i+1):
            print('*', end="")
        print("\r")
 

n = 10
pattern(n)
