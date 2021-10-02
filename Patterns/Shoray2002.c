#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// program to print an hourglass shape on the CLI
int main()
{int i,j;
int k,n;
printf("Give me the size of the hourglass: ");
/*
Give me the size of the hourglass: 5
 54321012345
  432101234
   3210123
    21012
     101
      0
     101
    21012
   3210123
  432101234
 54321012345
*/
scanf("%d",&n);
if(n>0)
{
int mid=((2*n+1)/2)+1;
for (i=1;i<=n;i++)
{
      for(j=0;j<=(2*n+1);j++)
      {
        if(j>=i && j<=(2*(n+1))-i)
        {
            if(j<mid)
            printf("%d",mid-j);
            else if(j==mid)
            printf("%d",0);
            else 
            printf ("%d",j-mid);
      }
     
else printf(" ");


}

printf("\n");
}
for(int i=0;i<=n;i++)
{
  printf(" ");
}
printf("%d\n",0);


for (i=1;i<=n;i++)
{
      for(j=0;j<=(2*n+1);j++)
      {
        if(j>=(n+1)-i && j<=(n+1)+i)
        {
            if(j<mid)
            printf("%d",mid-j);
            else if(j==mid)
            printf("%d",0);
            else 
            {printf ("%d",j-mid);}
          }
      else printf(" ");
      }

printf("\n");

}
}

else if(n==0)
printf("0");

else printf("Invalid Input,I need a positive integer as input");
/*
Give me the size of the hourglass: -1
Invalid Input,I need a positive integer as input
*/
return 0;
}