#include <stdio.h>

void main(){
    int n=0;
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            printf(" ");
        }
        for (int k=0;k<i+1;k++){
            printf("* ");
        }
        printf("\n");
    }

    for (int l=0;l<n-1;l++){
        for (int m=0;m<l+1;m++){
            printf(" ");
        }
        for (int p=n-l-1;p>0;p--){
            printf("* ");
        }
        printf("\n");
    }



}
