n = input("enter any string")
l = len(n)
x = l*3
for i in range(l):
    print()
    for k in range(1, x+1):
        print(" ", end="")
    for j in range(0, i+1):
        print(" ", n[j], end="")

    for m in range(j-1, -1, -1):
        print(" ", n[m], end="")

    x = x-3
