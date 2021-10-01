n = int(input())
for i in range(1, n+1, 1):
    for spaces in range(1, (n-i)+1, 1):
        print(" ", end="")
    for forward_count in range(i, 2*i, 1):
        print(forward_count, end="")
    for rev_count in range(2*i-2, i-1, -1):
        print(rev_count, end="")
    print()
