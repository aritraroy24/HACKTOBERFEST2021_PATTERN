#include<stdio.h>

int main()
{
    int n = 4,i,j,s;

    for ( i = 0; i < n; i++)
    {
        for ( j = n; j > i; j--)
        {
            printf("(");
        }
        for ( s = 0; s < i; s++)
        {
            printf(" ");
        }
        for ( s = i; s > 0 ; s--)
        {
            printf(" ");
        }
        for ( j = n - i; j >0; j--)
        {
            printf(")");
        }
        printf("\n");
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < i + 1; j++)
        {
            printf("(");
        }
        for (s = i + 1; s < n; s++)
        {
            printf(" ");
        }
        for ( s = i + 1; s < n; s++)
        {
            printf(" ");
        }
        for ( j = 0; j < i + 1; j++)
        {
            printf(")");
        }
        printf("\n");
    }
    return 0;

}

