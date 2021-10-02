n=9
d=1
for x in range(1, n + 1):
    for y in range(1, n + 1):
        if((y<=d)!=0 or y>=n-d+1) and y%2==1:
            print("* ",end="")
        elif((y>=d)!=0 and y<=n-d+1) and x%2==1:
            print("* ",end="")
        else:
            print("  ",end="")

    print()
    if x<=n//2:
        d+=1
    else:
        d-=1