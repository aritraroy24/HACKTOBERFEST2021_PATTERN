#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void printpattern(int n)
{
    vector<vector<int>> A(2*n-1,vector<int>(2*n-1,0));
    vector<int> ans;
    int T=0,B=2*n-2,L=0,R=2*n-2;
    int dir=0;
    int count=n;
    while(T<=B && L<=R)
    {
       
        if(dir==0)
        {
            
            for(int i=L;i<=R;i++)
           {
               A[T][i]=count;
           }
            T++;
            dir=1;
        }
        else if(dir==1)
        {
            for(int i=T;i<=B;i++)
           {
               A[i][R]=count;   
           }
            R--;
            dir=2;
        }
        else if(dir==2)
        {
            for(int i=R;i>=L;i--)
           {
               A[B][i]=count;
           }
            B--;
            dir=3;
        }
        else if(dir==3)
        {
            for(int i=B;i>=T;i--)
           {
               A[i][L]=count;
           }
            L++;
            dir=0;
            count--;
        }

        
        
    }
     //print the box
     for(int i=0;i<2*n-1;i++)
     {
         for(int j=0;j<2*n-1;j++)
         cout<<setw(3)<<A[i][j]<<" ";
         cout<<endl;
     }


}
int main()
{
    int n;
    cin>>n;     
    cout<<endl;
    printpattern(n); //function for printing box pattern
}