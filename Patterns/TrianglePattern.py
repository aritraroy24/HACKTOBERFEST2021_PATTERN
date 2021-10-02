rows = int(input("Enter the number of rows = "))     #Taking input from user for the number of rows the program will run

print("Triangular Pattern ")    

for i in range(0, rows):
    al= 65                                           #Using the ASCII Value of a for initiation.
    for j in range(rows, i, -1):                     #For the number of elements in a row.
        print(end = ' ')                             #In order to continue printing in the same line.
    for k in range(0, i + 1):                        #For determing each element in a single row.
        print('%c' %(al + k), end = ' ')
    print()                                           #For moving to the next line after completion of a row.
