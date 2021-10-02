#include <iostream>
using namespace std;
int main()
{
    int n=10,m=10;
    
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m-1;j++)
       {
           cout<<" ";
       }
       for(int k=1;k<=2*i-1;k++)
       {
         cout<<"*";
       }
       m--;

      cout<<endl;
    }
    return 0;
}