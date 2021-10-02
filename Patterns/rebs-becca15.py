for i in range(1,6):
  for j in range(1,6):
    if(j<6-i):
      print(i*i, end=" ")
    else:
      print(i, end=" ")
  print("\n")