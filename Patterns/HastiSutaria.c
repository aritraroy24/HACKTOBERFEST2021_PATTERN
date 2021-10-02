#include<stdio.h> 
#include<conio.h> 
int main() 
{ 
    int i,j,num; 
        printf("Enter the number : "); 
        scanf("%d",&num); 
        for(i=0;i<num;i++) 
        { 
          for(j=0;j<=num;j++) 
          { 
             printf(" # "); 
             printf(" "); 
           } 
             printf("\n"); 
             if(i%2==0) 
             { 
                printf("  "); 
             } 
        } 
 getch (); 
 return 0; 
} 