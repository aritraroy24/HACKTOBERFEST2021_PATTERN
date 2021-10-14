#program to print the following pattern
# 8   8
# 88 88
# 88888
# 88 88
# 8   8
n = int(input()) #here n is the number of ars in one triangle


gaps = n*2;
layers = n+n-1;
for i in range(1,n+1):
    for j in range(i):
        print(8,end = "")
    for j in range(gaps - i*2):
        print(" ",end = "")
    for j in range(i):
        print(8,end= "")
    print()
for i in range(n-1,0,-1):
    for j in range(i):
        print(8,end = "")
    for j in range(gaps - i*2):
        print(" ",end = "")
    for j in range(i):
        print(8,end= "")
    print()
        
