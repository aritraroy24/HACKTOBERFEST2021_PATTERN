n = int(input())

for i in range(1,n):
    for x in range(1,i):
        print(" "*(n-x),"*"*(2*x-1))
