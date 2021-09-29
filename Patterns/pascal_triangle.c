#include<stdio.h>
#include "header1.h"
void main(){
    int n,i,j,k,m,l,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=i;k<n;k++)
        printf(" ");
        for(j=0;j<=i;j++)
        {
            m=factorial(i);
            l=factorial(i-j);
            p=factorial(j);
            printf("%d ",m/(l*p));
        }
        printf("\n");
    }
}