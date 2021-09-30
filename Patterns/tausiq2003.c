#include<stdio.h>
int main()
{
    int i,j,sp;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=6-i;j++)
        printf("%d",j);
        for (sp=1;sp<=2*i-3;sp++)
        printf(" ");
        if (i==1)
        {
            for (j=j-2;j>=1;j--)
            printf("%d",j);
        }
        else
        {
            for (j=j-1;j>=1;j--)
            printf("%d",j);
        }
        printf("\n");
    }
    for (i=2;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        printf("%d",j);
        for (sp=1;sp<=2*(5-i)-1;sp++)
        printf(" ");
        if(i!=5)
        {
            for(j=j-1;j>=1;j--)
            printf("%d",j);
        }
        else
        {
            for (j=4;j>=1;j--)
            printf("%d",j);
        }
        printf("\n");

    }
    return 0;
}