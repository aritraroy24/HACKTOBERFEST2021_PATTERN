# -*- coding: utf-8 -*-
"""
Created on Tue Oct  6 10:26:52 2020

@author: Gunashree C
"""

 
def halfpyr(n): 
      
    for i in range(0, n): 
      
        for j in range(0, i+1): 
          
            print("* ",end="") 
       
        print("\r") 
   
n = 6

halfpyr(n) 