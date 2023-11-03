#from typing import Pattern

def dia_pattern(n):
    c = (n-1)//2
    c2 = 3*n//2-1
    for i in range(0, n):
        for j in range(0, n):
            if(i+j == c or i-j ==c or j-i == c or i+j == c2 or i == c or j == c):
                print("*", end = " ")
            else:
                print(" ", end= " ")    
        print(" ")        
n = 9
dia_pattern(n)        
