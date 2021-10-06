from turtle import *
import random
l=['#f7d26a','#ffb978','#fffc4d','#57ff9a','#bfbfbf','#52eeff','#a166ff','#fa66ff','#ff6691']
i=0
up()
goto(0,-380)
down()
speed(0)
while(True):
    pencolor(random.choice(l))
    circle(i)
    i+=1
