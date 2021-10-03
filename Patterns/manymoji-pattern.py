rows = 10
for i in range(1,rows+1):
    num = 65
    for j in range(1,i-1):
        print(chr(num), end = " ")
        num = num+1
    print()
