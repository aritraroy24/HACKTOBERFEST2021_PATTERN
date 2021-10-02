def A():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0 or j==6):
        print("*",end='')
      else:
        if(i==2):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def B():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0 or j==6):
        print("*",end='')
      else:
        if(i==2 or i==5):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def C():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0):
        print("*",end='')
      else:
        if(i==5):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def D():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0 or j==6):
        print("*",end='')
      else:
        if(i==5):
          print("*",end='')
        else:
          print(" ",end='')
    print()

def E():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0):
        print("*",end='')
      else:
        if(i==2 or i==5):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def F():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0):
        print("*",end='')
      else:
        if(i==2):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def G():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0):
        print("*",end='')
      if(j==6 and i>=3):
        print("*",end='')
      else:
        if((j>=2 and j<=4) and (i==2)):
          print("*",end='')
        if(i==5):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def H():
  for i in range(7):
    for j in range(7):
      if(j==0 or j==6):
        print("*",end='')
      else:
        if(i==3):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def I():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==3):
        print("*",end='')
      else:
        if(i==5):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def J():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==3):
        print("*",end='')
      else:
        if(i==5 and j<=3):
          print("*",end='')
        else:
          print(" ",end='')
    print()



def K():
    a = 0
    b = 3
    for i in range(7):
        for j in range(7):
            if j == 0 or (i == (j+(7//3)) and j > 0):
                print("*", end=" ")
            elif i == a and j == b:
                print("*", end=" ")
                a = a+1
                b = b-1
            else:
                print(" ", end=" ")
        print()

def L():
  for i in range(7):
    for j in range(7):
      if(j==0):
        print("*",end='')
      else:
        if(i==6):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def M():
  for i in range(7):
    for j in range(7):
      if(j==0 or j==6):
        print("*",end='')
      if((j==i or j==6-i) and j!=0 and j!=6 and i<=3):
        print("*",end='')
      else:
        print(" ",end='')
    print()


def N():
  for i in range(7):
    for j in range(7):
      if(j==0 or j==6):
        print("*",end='')
      if(j==i and j!=0 and j!=6):
        print("*",end='')
      else:
        print(" ",end='')
    print()


def O():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0 or j==6):
        print("*",end='')
      else:
        if(i==5):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def P():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0):
        print("*",end='')
      if(j==6 and i<=2):
        print("*",end='')
      else:
        if(i==2):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def Q():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(6):
      if(j==0 or j==5):
        print("*",end='')
      if(i>=2 and j>=2 and i==j and i!=5):
        print("*",end='')
      else:
        if(i==5 and j<=4):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def R():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0):
        print("*",end='')
      if(j==5 and i<=2):
        print("*",end='')
      if(i>=2 and j>=2 and i==j):
        print("*",end='')
      else:
        if(i==2 and j<5):
          print("*",end='')
        else:
          print(" ",end='')
    print()



def S():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==0 and i<2):
        print("*",end='')
      if(j==6 and i>=2):
        print("*",end='')
      else:
        if(i==2 or i==5):
          print("*",end='')
        else:
          print(" ",end='')
    print()


def T():
  for i in range(7):
    print("*",end='')
  print()
  for i in range(6):
    for j in range(7):
      if(j==3):
        print("*",end='')
      else:
        print(" ",end='')
    print()


def U():
  for i in range(7):
    for j in range(7):
      if(j==0 or j==6):
        print("*",end='')
      else:
        if(i==6):
          print("*",end='')
        else:
          print(" ",end='')
    print()

def V():
    i = 6
    j = 1
    for i in range(6, -1, -1):
        for j in range(6, i, -1):
            print(' ', end = '')
        print("*", end = '')
        for j in range(1, i * 2):
            print(' ', end = '')
        if (i >= 1):
            print("*", end = '')
        print()

def W():
  for i in range(7):
    for j in range(7):
      if(j==0 or j==6):
        print("*",end='')
      if((j==i or j==6-i) and j!=0 and j!=6 and i>=3):
        print("*",end='')
      else:
        print(" ",end='')
    print()

def X():
  for i in range(7):
    for j in range(7):
      if(i==j or i+j==6):
        print("*",end='')
      else:
        print(' ',end="")
    print()



def Y():
  for i in range(7):
    for j in range(7):
      if((i==j or i+j==6) and i<=3):
        print("*",end='')
      if(i>3 and j==3):
        print("*",end='')
      else:
        print(' ',end="")
    print()



def Z():
  for i in range(7):
    if(i==0 or i==6):
      print('*'*7)
    for j in range(7):
      if(i+j==5):
        print("*",end='')
      else:
        print(' ',end="")
    print()

A()
B()
C()
D()
E()
F()
G()
H()
I()
J()
K()
L()
M()
N()
O()
P()
Q()
R()
S()
T()
U()
V()
W()
X()
Y()
Z()