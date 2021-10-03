#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)  
    {  
        int n = 8;  
        for (int j = 1; j<= n - i; j++)   
        {   
            printf(" ");   
        }   
        for (int k = i; k >= 1; k--)  
        {  
            printf("%d", k);  
        }  
        for (int l = 2; l <= i; l++)   
        {  
            printf("%d", l);   
        }   
        printf("\n");  
    }   
    for (int i = 3; i >= 1; i--)  
    {  
        int n = 10;  
        for (int j = 0; j<= n - i; j++)   
        {  
            printf(" ");   
        }   
        for (int k = i; k >= 1; k--)  
        {  
            printf("%d", k);  
        }  
        for (int l = 2; l <= i; l++)  
        {  
            printf("%d", l);  
        }  
        printf("\n");  
    } 
}
