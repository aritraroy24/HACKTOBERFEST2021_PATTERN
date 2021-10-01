str="";    
for Row in range(0,12):    
    for Col in range(0,12):     
        if ((Col == 0 or Col == 1 or Col==2 or Col == 9 or Col == 10 or Col==11) or (Row == 5 or Row == 6 and Col > 0 and Col < 11)):  
            str=str+"*"    
        else:      
            str=str+" "    
    str=str+"\n"    
print(str);  