'''
Input:
 tiger
 Output:
 t   r
  i g
   e
  i g
 t   r
'''


#include<stdio.h>
#include <stdlib.h>

int main()
{
 char str[1000];
 scanf("%s",str);
 int len = strlen(str);
 
 for(int i=0;i<len;i++)
 { 
 int g=len-i-1;
 for(int j=0;j<len;j++)
 { 
 if(i==j)
 printf("%c",str[j]);
 else if(j==g)
 printf("%c",str[j]);
 else
 printf(" ");
 
 }
 printf("\n");
 }

}