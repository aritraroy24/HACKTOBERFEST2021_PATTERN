#!/usr/bin/env python
# coding: utf-8

# In[1]:


def contnum(n):
     
    # initializing starting number
    num = 1
 
    # outer loop to handle number of rows
    for i in range(0, n):
     
        # inner loop to handle number of columns
        # values changing acc. to outer loop
        for j in range(0, i+1):
         
            # printing number
            print(num, end=" ")
         
            # incrementing number at each column
            num = num + 1
     
        # ending line after each row
        print("\r")
 
n = 5
 
# sending 5 as argument
# calling Function
contnum(n)


# In[ ]:




