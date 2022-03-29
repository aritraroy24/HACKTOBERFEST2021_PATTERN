k = 0
for i in range(1, 10):
    if i<=5:
        k+=1 
    else:
        k-=1
    for j in range(1, 10):
        if j <= (6-k) or j >= (4+k):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print("\n")
