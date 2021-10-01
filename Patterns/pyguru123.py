# Swastik pattern with python

n = int(input('Enter n : ')) // 2
print()

for i in range (-n,n+1):
 for j in range (-n,n+1):
  if i == 0 or j == 0:
   print('*',end=' ')
  elif (j == -n and i < 0) or (j == n and i > 0) or (i == -n and j > 0) or (i == n and j <0):
   print('*',end=' ')
  else:
   print(' ',end=' ')
 print()