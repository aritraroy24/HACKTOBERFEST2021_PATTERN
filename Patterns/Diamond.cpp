#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, r, x;
    cout<<"Enter the Number of Rows: ";
    cin>>r;
    x = r-1;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=x; j++)
            cout<<" ";
        x--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<endl;
    }
    x = 1;
    for(i=1; i<=(r-1); i++)
    {
        for(j=1; j<=x; j++)
            cout<<" ";
        x++;
        for(j=1; j<=(2*(r-i)-1); j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
