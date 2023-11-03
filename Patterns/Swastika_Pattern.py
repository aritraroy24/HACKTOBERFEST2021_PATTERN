# Python3 implementation to print swastika pattern

# Function to print swastika
def swastika(row,col):
	
	for i in range(row):
		for j in range(col):
			
			# checking if i < row/2
			if(i < row // 2):
				
				# checking if j<col/2
				if (j < col // 2):
					
					# print '*' if j=0
					if (j == 0):
						print("*", end = "")
						
					# else print space
					else:
						print(" ", end = " ")
				
				# check if j=col/2
				elif (j == col // 2):
					print(" *", end = "")
				else:
					
					# if i=0 then first row will have '*'
					if (i == 0):
						print(" *", end = "")
						
			elif (i == row // 2):
				print("* ", end = "")
			else:
				
				# middle column and last column will
				# have '*' after i > row/2
				if (j == col // 2 or j == col - 1):
					print("* ", end = "")
					
				# last row
				elif (i == row - 1):
					
					# last row will be have '*' if
					# j <= col/2 or if it is last column
					if (j <= col // 2 or j == col - 1):
						print("* ", end = "")
					else:
						print(" ", end = " ")
				else:
					print(" ", end = " ")
		print()
		
# Driver code

# odd number of row and column
# to get perfect swastika
row = 7; col = 7

# Function calling
swastika(row, col)

# This code is contributed by Azkia Anam.
