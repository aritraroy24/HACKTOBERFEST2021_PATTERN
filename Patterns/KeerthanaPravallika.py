word = input()

if len(word) % 2 == 0:
    print("INVALID")
else:
    n = len(word)
    for i in range(n):
        for j in range(n):
            if(i == j) or (j == n-i-1):
                print(word[j],end='')
            else:
                print(' ',end='')
        print()
