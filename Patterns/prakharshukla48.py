def charpattern(n):
    k = 2 * n - 2
    for i in range(0, n):
        for j in range(0, k):
            print(end=" ")
        k = k - 1
        x = 65
        for j in range(0, i + 1):
            ch = chr(x)
            print(ch, end=" ")
            x += 1
        print("\r")
    k = n - 2
    x = 65
    for i in range(n, -1, -1):
        for j in range(k, 0, -1):
            print(end=" ")
        k = k + 1
        for j in range(0, i + 1):
            ch = chr(x)
            print(ch, end=" ")
            x += 1
        print("\r")
charpattern(7)