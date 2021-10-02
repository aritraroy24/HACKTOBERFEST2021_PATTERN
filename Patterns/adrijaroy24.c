#include <stdio.h>
int main()
{
   int a, b;
   printf("Enter 0 (for Triangular star pattern) or 1 (for Reversed Triangular star pattern):\n");
   scanf("%d", &a);
   printf("Enter a number for the pattern:\n");
   scanf("%d", &b);

   if (a == 1)
   {
      for (int i = b; i >= 0; i--)
      {
         for (int j = 1; j <= i; j++)
         {
            printf("*");
         }
         printf("\n");
      }
   }

  if (a == 0)
  {
     for (int i = 0; i <= b; i++)      
     {
        
        for (int j = 0; j <= i; j++)
        {
           printf("*");
        }
        printf("\n");
     }
     
  }
  

   return 0;
}
