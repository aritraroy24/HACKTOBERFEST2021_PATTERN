#include<iostream>
using namespace std;

int main()
{
    int i, j;

    for(i=1; i<=5; i++)
    {
        for(j=5; j>i; j--)
        {
           cout<<" ";
        }
        cout<<"*";
        for(j=1; j<(i-1)*2; j++)
        {
           cout<<" ";
        }
        if(i==1) cout<<endl;
      else cout<<"*"<<endl;
    }

    for(i=4; i>=1; i--)
    {
        for(j=5; j>i; j--)
        {
            cout<<" ";
        }
       cout<<"*";
        for(j=1; j<(i-1)*2; j++)
        {
            cout<<" ";
        }
        if(i==1) cout<<endl;
      else cout<<"*"<<endl;
    }
    return 0;
}