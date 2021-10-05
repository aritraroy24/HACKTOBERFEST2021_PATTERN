# Python program to print
# the Hut Star Pattern

# Function to print the Hut-Star Pattern
def printHutStar(n):

    # Printing the upper triangle
    for i in range(n):

        # Left space triangle
        for j in range(i + 1, n):
            print(' ', end='')

        # Center Star triangle
        for j in range(0, 2 * i + 1):
            print('*', end='')
        print()

    # Printing the lower rectangles
    for i in range(3):

        # Left rectangle
        for j in range(3):
            print('*', end='')

        # Center Space rectangle
        for j in range(2 * n - 7):
            print(' ', end='')

        # Right rectangle
        for j in range(3):
            print('*', end='')
        print()


# Driver Code
n = 6

# function calling
printHutStar(n)

# This code is contributed
# by SamyuktaSHegde
