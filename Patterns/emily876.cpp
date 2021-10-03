#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int n =5;

    int space=n;

    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<=i;k++)
        {
            if(k==0 && i==0)
                cout<<k;
            else
            cout<<k<<" ";
        }
        if(i>0)
        {
            for(int k=i-1;k>=0;k--)
            {
                if(k==0)
                cout<<k;
                else
                cout<<k<<" ";
            }
        }
        
        space--;
        cout<<"\n";
    }

    space=1;

    for(int i=n-1;i>=0;i--)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<=i;k++)
        {
            if(k==0 && i==0)
                cout<<k;
            else
            cout<<k<<" ";
        }
        if(i>0)
        {
            for(int k=i-1;k>=0;k--)
            {
                if(k==0)
                cout<<k;
                else
                cout<<k<<" ";
            }
        }
        
        space++;
        cout<<"\n";
    }

    
return 0;
}
