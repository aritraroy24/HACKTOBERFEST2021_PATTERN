Name = list(input("Enter the String "))

for i in range(0,len(Name)+1):
    for j in range(0,i):
        print(Name[j],'',end='')
    print()
    
