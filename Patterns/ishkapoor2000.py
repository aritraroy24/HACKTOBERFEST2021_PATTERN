# -*- coding: utf-8 -*-
"""
Created on Sat Oct  2 10:00:00 2021

@author: ISH KAPOOR
"""

class Pattern:
    """
    This class prints different patterns based on number of rows

    Parameters:
    rows (int): number of rows for a pattern

    Returns:
    None: None
    It prints star pattern as string
    """

    def __init__(self, rows):
        self.rows = rows


    def hollowDiamond(self):
        """
        This function takes rows as input and prints Hollow-Diamond pattern
        """

        for i in range(self.rows):

            for _ in range(i+1, self.rows+1): print("*", end=" ")
            for _ in range(i):
                print(" ", end=" ")
                print(" ", end=" ")
            for _ in range(i+1, self.rows+1): print("*", end=" ")
            if i!=(self.rows-1): print("")

        for i in range(self.rows+1):
            for _ in range(i): print("*", end=" ")
            for _ in range(i+1, self.rows+1):
                print(" ", end=" ")
                print(" ", end=" ")
            for _ in range(i): print("*", end=" ")
            print("")


    def cosmicStar(self):
        """
        This function takes rows as input and prints Star pattern
        """

        columnDigit = 2*(self.rows)-5

        for rowItr in range(self.rows):
            for columnItr in range(columnDigit):
                if rowItr==2 or rowItr==(self.rows-3) or rowItr+columnItr==(columnDigit//2) or columnItr-rowItr==(columnDigit//2) or (rowItr-columnItr)==2 or (columnItr+rowItr)==(columnDigit+1):
                    print("*", end="")
                else:
                    print(" ", end="")
            print("")


    def diamondHeart(self):
        """
        This function takes rows as input and prints Heart pattern
        """

        for i in range(self.rows//2):

            for j in range((self.rows//2)-i-1):
                print(" ", end="")
            for j in range(i+1):
                print("* ", end="")

            if self.rows%2 == 0: 
               for j in range(2*((self.rows//2)-i-1)):
                   print(" ", end="")
            else:
                for j in range(2*((self.rows//2)-i-1)+2):
                   print(" ", end="")

            for j in range(i+1):
                print("* ", end="")

            print("")


        for i in range(self.rows, 0, -1):

            for j in range(self.rows-i):
                print(" ", end="")
            for j in range(i, 0, -1):
                print("* ", end="")

            print("")

pattern = Pattern(15)
patternInput = int(input("--*--Enter the Pattern--*--\n[1] - Diamond\n[2] - Heart\n[3] - Star\n[0] - QUIT\n>>> "))

if (patternInput <= 3):

    if patternInput == 1:
        pattern.hollowDiamond()
    elif patternInput == 2:
        pattern.diamondHeart()
    elif patternInput == 3:
        pattern.cosmicStar()
    else:
        print("Thankyou! Visit & Follow: https://github.com/ishkapoor2000/")
else:
    print("Invalid Input")