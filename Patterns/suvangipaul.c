#include<stdio.h>
int main()
{
    int i,j1,k1,l1,m,j2;
    for(i=1;i<=9;i+=2)
    {
        for(j1=1;j1<=i;j1++)
        printf("$");
        for(k1=9;k1>i;k1--)
        printf(" ");
        for(l1=1;l1<=i;l1++)
        printf("$");
        for(m=9;m>i;m--)
        printf(" ");
        for(j2=1;j2<=i;j2++)
        printf("$");
        printf("\n");
    }
     for(i=1;i<=7;i+=2)
     {
         for(j1=7;j1>=i;j1--)
         printf("$");
         for(k1=1;k1<(i+2);k1++)
         printf(" ");
         for(l1=7;l1>=i;l1--)
         printf("$");
         for(m=1;m<(i+2);m++)
         printf(" ");
         for(j2=7;j2>=i;j2--)
         printf("$");
         printf("\n");
     }
      return 0;
    }
