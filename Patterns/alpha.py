n=int(input())
i=1
while i<=n:
    j=1
    a=chr(ord('A')+i-1)
    while j<=i:
        b=chr(ord(a))
        print(b,end='')
        j+=1
    print()
    i+=1