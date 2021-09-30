def print_dl(n):
    x=n//2
    t=0;
    i=1
    s=""
    while(i<=x):
        if(i==1):
            s+="."
            print(".",end="")
        elif(t==0):
            s+="|"
            print("|",end="")
            t=1
        else:
            s+=".."
            print("..",end="")
            i=i+1
            t=0
        i=i+1
    s+="|"
    print("|",end="")
    x=x+2
    t=0
    while(x<=n):
        if(x==n):
            s+="."
            print(".",end="")
        elif(t==0):
            s+=".."
            print("..",end="")
            x=x+1
            t=1
        else:
            s+="|"
            print("|",end="")
            t=0
        x=x+1
    return s


n,m=map(int,input().split())
x=n//2
z=1
lis=[]
s=""
for i in range(x):
    temp=3*z
    t=(m-temp)//2
    j=1
    while(j<=m):
        if((j)<=t):
            s+="-"
            print("-",end="")
        elif((j)<=(t+temp)):
            y= print_dl(temp)
            s+=y
            j=t+temp
        else:
            s+="-"
            print("-",end="")
        j=j+1
    print()
    lis.append(s)
    s=""
    z=z+2
l=(m-7)//2
i=1
while(i<=m):
    if(i<=l):
        print("-",end="")
    elif(i<=(l+7)):
        print("WELCOME",end="")
        i=l+7
    else:
        print("-",end="")
    i=i+1
print()
for i in lis[::-1]:
    print(i)
    