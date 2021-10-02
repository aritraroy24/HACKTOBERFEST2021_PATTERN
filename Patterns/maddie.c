#include <stdio.h>

// Adds prototype function
void buildPyramid(int height);

int main(void)
{
    // Initializes height variable
    int height;

    // Prompts user for input on how high this pyramid should be
    do {
        printf("Please enter a number between 1 and 8: ");
        scanf("%i",&height);
        if (height >= 1 && height <= 8)
        {
             // Calls function and passes height as an argument
             buildPyramid(height);
        }
        else
        {
            printf("Try Again by entering a number between 1 and 8.\n");
            continue;
        }
    }

    // Input must be a positive integer between 1 and 8
    while (height < 1 || height > 8);

}

// Declares function to build the pyramid
void buildPyramid(int height)
{
    // Define variables to use in loops
    int row;
    int space;
    int hash;

    // Adds row
    for (row = 1; row <= height; row++)
    {
        // Adds spaces
        for (space = (height - 1); space >= row; space--)
        {
            printf(" ");
        }
        // Adds hashes
        for (hash = 1; hash <= row; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}
