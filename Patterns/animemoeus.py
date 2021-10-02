for i in range(10):
    if i % 2 == 0:
        print(f"  " * i, end=">")
        print("\n", end="")
    else:
        print(f" " * i, end=">")
        print("\n", end="")

for i in range(10, -1, -1):
    if i % 2 == 0:
        print(f"  " * i, end=">")
        print("\n", end="")
    else:
        print(f" " * i, end=">")
        print("\n", end="")
