row =10
col=10

for i in range(0,row):
    for j in range(0,col):
        if((j == 0 or j == col-1) and (i!=0 and i!=row-1)) :
            print('*',end='')   #end='' so that print statement should not change the line.
        elif( ((i==0 or i==row-1) and (j>0 and j<col-1))):
            print('#',end='')
        else:
            print(end=' ')  #to print the space.

    print()  #to change the line after iteration of inner loop.