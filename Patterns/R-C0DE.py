#language: python3
#prints a name as an staircase order
n=input("Enter any name or a word: ")
for i in range(1,len(n)):
    print(n[:i])
for i in range(len(n),0,-1):
    print(n[:i])
