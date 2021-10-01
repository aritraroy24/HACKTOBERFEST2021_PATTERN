n=int(input("Enter the number of rows: "))  
  
#print space  
k=2*n-2  

for i in range(n-1, -1, -1):  
    #printing all spaces  
    for j in range(k, 0, -1):  
        print(end=" ")  
    k=k+1  
    #print all stars
    for j in range(0,i + 1):  
        print("*", end=" ")  
    print("")  
