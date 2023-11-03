/* 
This is a program to display all the alphabets pattern using simple for loops and if statements and with functions.
*/

#include<stdio.h>

int main()
{
    int i,j,k,s,a,b;
    //Function declarations
    //For only spaces
    int spaces(int n)
    {
        for(s=1;s<=n;s++)
        printf(" ");
        return 0;
    }
    //sas refers to space after star
    int sas(int n)
    {
        for(a=1;a<=n;a++)
        printf("* ");
        return 0;
    }
    //sbs refers to space before star
    int sbs(int n)
    {
        for(b=1;b<=n;b++)
        printf(" *");
        return 0;
    }
      
    //To print A
    spaces(7);
    printf("*");
    printf("\n");
    for(i=1;i<=6;i++)
    {
        for(j=i;j<=6;j++)
        printf(" ");
        printf("*");
        if(i==4)
        sbs(4);
        for(k=1;k<=i;k++)
        {
            if(k==1)
            spaces(1);
            if(k>1)
            spaces(2);
        }
        if(i!=4)
        printf("*");
        printf("\n");
    }
    printf("\n");
    
    //To print B
    for(i=1;i<=7;i++)
    {
        printf("*");
        if(i==1||i==4||i==7)
        {
            sbs(4);
        }
        if(i==2||i==3||i==5||i==6)
        {
            spaces(9);
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print C
    for(i=1;i<=7;i++)
    {
        if(i==1||i==7)
        {
            spaces(1);
            sbs(5);
        }
        if(i==2||i==6)
        sbs(1);
        if(i==3||i==4||i==5)
        printf("*");
        printf("\n");
    }
    printf("\n");
    
    //To print D
    for(i=1;i<=7;i++)  
    {
        printf("*");
        if(i==1||i==7)
        {
            sbs(4);
        }
        if(i==2||i==6)
        {
            spaces(9);
            printf("*");
        }
        if(i==3||i==5||i==4)
        {
            spaces(10);
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print E
    for(i=1;i<=7;i++)
    {
        printf("*");
        if(i==1||i==4||i==7)
        {
            sbs(5);
            //Lakshman
        }
        printf("\n");
    }
    printf("\n");
    
    //To print F
    for(i=1;i<=7;i++)
    {
        printf("*");
        if(i==1||i==4)
        {
            sbs(5);
        }
        printf("\n");
    }
    printf("\n");
    
    //To print G
    for(i=1;i<=7;i++)
    {
        if(i==1||i==7)
        {
            spaces(1);
            sbs(4);
        }
        if(i==2||i==6)
        {
            sbs(1);
            spaces(8);
            printf("*");
        }
        if(i==3)
        printf("*");
        if(i==5)
        {
            printf("*");
            spaces(9);
            printf("*");
        }
        if(i==4)
        {
            printf("*");
            spaces(5);
            //Lakshman
            sas(3);
        }    
        printf("\n");  
    }
    printf("\n");
    
    //To print H
    for(i=1;i<=7;i++)
    {
        printf("*");
        if(i==4)
        {
            sbs(5);
        }
        if(i!=4)
        {
            spaces(9);
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print I
    for(i=1;i<=7;i++)
    {
        if(i==1||i==7)
        sbs(5);
        //Lakshman
        else
        {
            spaces(5);
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print J
    for(i=1;i<=7;i++)
    {
        if(!(i==7||i==6))
        spaces(7);
        if(i==7)
        {
           spaces(4);
           printf("* ");
        }
        if(i==6)
        {
            spaces(3);
            printf("*");
            spaces(3);
        }
        printf("*");
        printf("\n");
    }
    printf("\n");
    
    //To print K
    for(i=1;i<=4;i++)
    {
        printf("*");
        for(k=4;k>i;k--)
        printf("  ");
        printf("*");
        printf("\n");
    }
    for(i=1;i<4;i++)
    {
        printf("*");
        spaces(i*2);
        printf("*");
        printf("\n");
    }
    printf("\n");
    
    //To print L
    for(i=1;i<=7;i++)
    {
        printf("*");
        if(i==7)
        {
            sbs(5);
       }  
       printf("\n");     
    }
    printf("\n");
    
    //To print M
    for(i=1;i<=7;i++)
    {
        printf("*");
        spaces(i-1); 
        printf("*"); 
        for(j=7;j>i;j--)
        printf("  ");
        printf("*");
        spaces(i-1);
        printf("*");
        printf("\n");
    }
    printf("\n");
    
    //To print N
    for(i=1;i<=7;i++)
    {
        printf("*");
        spaces(i-1);
        printf("*");
        for(j=7;j>i;j--)
        //Lakshman
        printf(" ");
        printf("*");
        printf("\n");
    }
    printf("\n");
  
    //To print O
    for(i=1;i<=7;i++)
    {
        if(i==1||i==7)
        {
            spaces(3);
            sas(3);
        }
        if(i==2||i==6)
        {
            sbs(1);
            spaces(7);
            printf("*");
        }
        if(i==3||i==4||i==5)
        {
            printf("*");
            spaces(9);
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print P
    for(i=1;i<=7;i++)
    {
        printf("*");
        if(i==1||i==4)
        sbs(4);
        if(i==2||i==3)
        {
            spaces(9);
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print Q
    for(i=1;i<=8;i++)
    {
        if(i==1||i==7)
        {
            spaces(3);
            sas(i==1?3:4);
        }
        if(i==2||i==6)
        {
            sbs(1);
            if(i==6)
            {
                spaces(6);
                printf("*");
            }
            spaces(i==2?7:1);
            printf("*");
        }
        if(i==3||i==4||i==5)
        {
            printf("*");
            if(i==5)
            {
                spaces(6);
                printf("*");
                //Lakshman
            }
            spaces(i==5?2:9);
            printf("*");
        }
        if(i==8)
        {
            spaces(10);
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print R
    for(i=1;i<=7;i++)
    {
        printf("*");
        if(i==1||i==4)
        {
            sbs(3);
        }
        if(i==2||i==3)
        {
            spaces(6);
            printf("*");
        }
        if(i>4)
        {
            spaces(2);
            spaces(i-5);
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print S
    for(i=1;i<=7;i++)
    {
        if(i==1||i==4||i==7)
        {
            spaces(1);
            sas(5);
        }
        if(i==2||i==3)
        printf("*");
        if(i==5||i==6)
        {
            spaces(10);
            //Lakshman
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print T
    for(i=1;i<=7;i++)
    {
        if(i==1)
        sbs(5);
        else
        {
            spaces(5);
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    
    //To print U
    for(i=1;i<=7;i++)
    {
        if(!(i==6||i==7))
        {
            printf("*");
            //Lakshman
            spaces(7);
            printf("*");
        }
        if(i==6)
        {
            sbs(1);
            spaces(5);
            printf("*");
        }
        if(i==7)
        {
            spaces(2);
            sas(3);
        }
        printf("\n");
    }  
    printf("\n");
    
    //To print V
    for(i=1;i<=7;i++)
    {
        spaces(i);
        printf("*");
        for(j=7;j>i;j--)
        printf("  ");
        printf("*");
        printf("\n");
    }
    printf("\n");
    
    //To print W
    for(i=1;i<=7;i++)
    {
        printf("*");
        if(i>3)
        {
            for(j=7;j>i;j--)
            printf(" ");
            printf("*");
            spaces((i-4)*2);
            //Lakshman
            printf("*");
            for(j=7;j>i;j--)
            printf(" ");
            printf("*");
        }
        if(i<4)
        {
            spaces(8);
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print X
    for(i=1;i<=8;i++)
    {
        if(i<5)
        {
            spaces(i-1);
            printf("*");
            for(j=4;j>i;j--)
            printf("  ");
            printf("*");
        }
        if(i>4)
        {
            for(j=8;j>i;j--)
            printf(" ");
            printf("*");
            spaces((i-5)*2);
            //Lakshman
            printf("*");
        }
        
        printf("\n");
    }
    printf("\n");
    
    //To print Y
    for(i=1;i<=8;i++)
    {
        if(i<5)
        {
            spaces(i-1);
            printf("*");
            for(j=4;j>i;j--)
            printf("  ");
            printf("*");
        }
        if(i>4)
        //Lakshman
        {
            for(j=8;j>i;j--)
            printf(" ");
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    //To print Z
    for(i=1;i<=7;i++)
    {
        if(i==1||i==7)
        sas(5);
        else
        {
            for(j=6;j>i;j--)
            printf("  ");
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
