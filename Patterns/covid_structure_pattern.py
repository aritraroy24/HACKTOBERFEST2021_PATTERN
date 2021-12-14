import tkinter as TK
from turtle import *

speed(10)
color('teal')
bgcolor('black')
b = 200
while b > 0:
    left(b)
    forward(b * 3)
    b = b-1
