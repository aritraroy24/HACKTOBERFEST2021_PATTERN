# Pattern Name: Arrow 
# Author: Purnadip Manna
# Github: https://github.com/purnadip-manna


n = int(input("Enter the number: "))
space_no = n
i = 1
while(i<=n):
	print(" "*(space_no-i)+"*"*(i*2-1))
	i += 1

space_no = n//2
mid = 0
if(n%2):
	mid = n
else:
	mid = n-1	

for i in range(n):
	print(" "*(space_no)+"*"*mid)


i = 1
while space_no != 0:
	space_no -= 1
	print(" "*(space_no)+"*"*(i)+" "*(mid)+"*"*(i))
	i += 1