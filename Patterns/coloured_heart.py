
#creating a heart shape using turtle module
from turtle import *          #importing turtle module
import time                   #to freeze screen for few moments after work completion
color("red")                  #filling color red int pen or pointer
begin_fill()                  #start filling command
pensize(4)                    #assigning pen size
left(50)                      #setting angle of 50 Degree to left from center of screen
forward(133)                  #going forward 133 pixels
circle(50,200)                #creating semi-circle 
right(140)                    #setting point to right at 140 degree
circle(50,200)                #creating semi-circle
forward(133)                  #going forward 133 pixels
end_fill()                    #finish filling 
time.sleep(5)                 #pause screen for 5 seconds before quiting
