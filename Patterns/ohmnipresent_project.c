#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);

    printf("Here's the hollow rectangle of following rows and columns:\n");
    
    int i,j;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i==1 || i==r || j==1 || j==c){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        
        printf("\n");
    }
    return 0;
    
}