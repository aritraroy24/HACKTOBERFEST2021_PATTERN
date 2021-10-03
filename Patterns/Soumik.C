#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=n/2;
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
            printf("* ");
        
        printf(" ");

        for(j=2*(n-i);j>=1;j--)
            printf("  ");
        for(j=1;j<=i;j++)
            printf(" *");

        printf(" ");
        printf("\n");
    }
    printf(" \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("* ");
        
        printf(" ");

        for(j=2*(n-i);j>=1;j--)
            printf("  ");
        for(j=1;j<=i;j++)
            printf(" *");
            
        printf("\n");
    }
}