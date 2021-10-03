#include<stdio.h>
int main(){
    int rows=6;
   for(int i=0;i<=rows;i++){
        for(int j=0;j<=2*rows;j++){
        if(j>=rows-i+1 && j<=rows+i-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");}
     for(int i=rows;0<=i;i--){
        for(int j=0;j<=2*rows;j++){
        if(j>=rows-i+1 && j<=rows+i-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");}
return 0;}

