#include<stdio.h>
int main(){
    int n,i,l;
    printf("Enter the value : ");
    scanf("%d",&n);  
       i = (2*n)-3;
       for(int j =n;j>1;j--){           
           for(int k=n;k>=j;k-- )
           {           
           printf("%d",k);
           }
           
            
            for( l = 1;l<=i;l++)
            {
            printf("%d",j);
            }
            i = i -2;

            for(int g=j;g<=n;g++ )
           {           
           printf("%d",g);
           }

           printf("\n");
       }  
    
    int i1 = 1;
    for(int j1 =n;j1>1;j1--){           
           for(int k1=n;k1>i1;k1-- )
           {           
           printf("%d",k1);
           }
         

         for(int l1=1;l1<=(2*i1)-1;l1++){
             printf("%d",i1);
         }
        

        for(int g1=(i1+1);g1<=n;g1++ )
           {           
           printf("%d",g1);
           }




        i1++;
         printf("\n");

    }
    for(int h =1;h<=(2*n)-1;h++){
        printf("%d",n);
    }
    printf("\n");

    }
