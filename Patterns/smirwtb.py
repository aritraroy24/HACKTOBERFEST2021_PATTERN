for i in range(1, last_num):
for i in range(0, i, 1):
print(format(2**i, "4d"), end=' ')
for i in range(-1+i, -1, -1):
print(format(2**i, "4d"), end=' ')
print("")
