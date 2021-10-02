n=int(input())
for i in range((2*n)-1):
    if i<n-1:
        count1=n
        count2=n-i
        for j in range(i+1):
            print(count1,end=" ")
            count1-=1
        for j in range((2*n)-(2*i)-3):
            print(count2,end=" ")
        for j in range(i+1):
            print(count2,end=" ")
            count2+=1
    elif i==n-1:
        count1=n
        count2=n-i+1
        for j in range(i+1):
            print(count1,end=" ")
            count1-=1
        for j in range(i):
            print(count2,end=" ")
            count2+=1
    else:
        a=(2*n)-i-2
        count1=n
        count2=n-a
        for j in range(a+1):
            print(count1,end=" ")
            count1-=1
        for j in range((2*n)-(2*a)-3):
            print(count2,end=" ")
        for j in range(a+1):
            print(count2,end=" ")
            count2+=1
    print()