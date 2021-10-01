n = int(input("Enter the value n:"))
for i in range(0,n):
    for j in range(1,n-i):
        print(" ",end='')
    if (i % 2)==0:
        for k in range(0,i+1):
            print("*",end='')
    else:
        for k in range(0,i+1):
            print("-",end='')
    print()
for i in range(n-1,0,-1):
    for j in range(n,i,-1):
        print(" ",end='')
    if (i % 2)==0:
        for k in range(i,0,-1):
            print("-",end='')
    else:
        for k in range(i,0,-1):
            print("*",end='')
    print()
    
