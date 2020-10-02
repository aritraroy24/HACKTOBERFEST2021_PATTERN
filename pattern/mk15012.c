#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

	printf("\n");
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(rows*2 -(2*i-1)); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
