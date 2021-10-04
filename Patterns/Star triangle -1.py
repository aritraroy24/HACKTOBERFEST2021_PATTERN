#!/usr/bin/env python
# coding: utf-8

# In[5]:


num=int(input("Enter the number whose size pattern you want : "))     #Enting the number whose pattern is wanted
i=1                                                                #My 1st counter which will go till NUM or which will form number of rows
while i<=num:                                                      #Creating a condition for rows
    j=1                                                            #Creating a counnter for Columns
    while j<=i:                                                    #Nmber of columns
        print("*",end=" ")                                         #Printing whatever i want and changing tab with end=" "
        j=j+1                                                      #Incrementing my column
    print()                                                        #Comming out of the loop and again repeating the process
    i=i+1                                                          #Incrementing Rows

    

