n=int(input())
st=n #stars
sp=0 #spaces
for i in range(n):
    for k in range(sp):
        print(" ",end="")
    for k in range(st):
        print("*",end="")
    print()
    sp=sp+2
    st=st-1
sp=sp-2
st=st+1 
for i in range(n-1):
    sp=sp-2
    st=st+1
    for k in range(sp):
        print(" ",end="")
    for k in range(st):
        print("*",end="")
    print()
