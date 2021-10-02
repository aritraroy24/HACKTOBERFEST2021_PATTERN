#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int dr=n+1;
    int con=n;

    for(int i=1;i<=n;i++)
    {
        int x=0;
        for(int j=n;j>=dr;j--)
        {
           cout<<j<<" ";
           x++;
        }
        for(int j=1; j<= (2*n)-1-(2*x) ; j++)
        {
              cout<<con<<" ";
        }
        for(int j=dr ; j<=n ; j++)
        {
              cout<<j<<" ";
        }
        dr--;
        con--;
        cout<<endl;
    }

    dr=3;
    con=2;

    for(int i=1;i<=n-1;i++)
    {
        int x=0;
        for(int j=n;j>=dr;j--)
        {
           cout<<j<<" ";
           x++;
        }
        for(int j=1; j<= (2*n)-1-(2*x) ; j++)
        {
              cout<<con<<" ";
        }
        for(int j=dr ; j<=n ; j++)
        {
              cout<<j<<" ";
        }
        dr++;
        con++;
        cout<<endl;
    }

}