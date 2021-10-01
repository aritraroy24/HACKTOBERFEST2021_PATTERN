/*
1
3 2
4 5 6
10 9 8 7
11 12 13 14 15
*/
#include<stdio.h>
void main()
{
    int i,j,p,x=0;
    for(i=1;i<=5;i++)
    {
        x+=i;
        for(j=1;j<=i;j++)
        {
            p=(i%2==1) ? x+j-i : x-j+1;
            printf("%d ",p);
        }
        printf("\n");
    }
}

