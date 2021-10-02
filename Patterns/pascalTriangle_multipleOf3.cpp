#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=3;
    int n=7;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else{
                cout<<x<<" ";
                x+=3;
            }

        }
        cout<<endl;
    }
}