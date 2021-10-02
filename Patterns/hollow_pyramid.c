/**
 * C program to print hollow pyramid triangle star pattern
 * By taking the rows as per user input and using 
 * user defined function to implement the algorithm.
 */

#include <stdio.h>

/*User defined function*/
void pattern(int rows)
{
    int  i, j;
        for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(2*i-1); j++)
        {
            /*
             * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */ 
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }
}


/*The driver code*/
int main(void)
{
    int rows;

    /* Input rows to print from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    /*function call*/
    pattern(rows);

    return 0;
}
