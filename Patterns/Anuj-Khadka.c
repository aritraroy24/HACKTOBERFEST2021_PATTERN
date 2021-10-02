//Print a pattern in C.

#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter the number of row : ");
    scanf("%d",&row);
    for (i=1; i<=row;i++){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    
}
