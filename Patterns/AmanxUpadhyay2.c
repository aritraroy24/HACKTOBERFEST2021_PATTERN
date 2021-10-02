#include<stdio.h>
int main()
{
  int n,r,c;
  char ch = 'A';

  printf("Enter number of rows: ");
  scanf("%d",&n);

  // outer loop
  for(r=1; r<=n; r++)
  {
    // inner loop
    for(c=1; c<=n; c++)
    {
      if(c==1||r==1||c==n||r==n) printf("* ");
      else printf("%c ",ch++);
      if(ch > 'Z') ch='A';
    } // end of inner loop

    printf("\n");
  } // end of outer loop

  return 0;
}