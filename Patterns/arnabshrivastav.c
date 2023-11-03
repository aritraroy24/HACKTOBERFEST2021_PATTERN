// Printing pascal's triangle by taking no. of rows as input from the user

#include <stdio.h>
int main()
{
   int row,c=1,space,i,j;
   scanf("%d",&row);
   for(i=0;i<row;i++)
   {
      for(space=1;space<=row-i;space++)
         printf("  ");
      for(j=0;j<=i;j++)
      {
         if(j==0||i==0)
            c=1;
         else
            c=c*(i-j+1)/j;
         printf("%4d",c);
      }
      printf("\n");
   }
   return 0;
}
