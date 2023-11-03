def pattern(n):
    for j in range(0,n):
        for k in range(0,j+1):
            print("*",end="")
        print("\n")

def revpattern(n):
    for j in reversed(range(n)):
        for k in reversed(range(j )):
            print("*",end="")
        print("\n")
            
i=int(input( "number of rows and column u want in pattern"))
pattern(i)
revpattern(i)

