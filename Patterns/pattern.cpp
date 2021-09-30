#include<bits/stdc++.h>
#include <stack>
#include <string>
#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
     #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w",stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
fastio
ll n;
cin>>n;
ll i,j,k,l,m;
for(i=1;i<=n;i++){

    for(j=1;j<=n-i;j++)
    cout<<"   ";
    for(j=2*i-1;j>0;j--)
    {
        if(j==2*i-1 || j==1 || j==i || i==n)
        cout<<".  ";
        else
        cout<<"   ";
    }

    cout<<"\n";
}
for(i=n-1;i>=0;i--)
{
    for(j=1;j<n-i;j++)
    cout<<"   ";
    for(j=2*i-1;j>=0;j--)
    {
        if(j==2*(i-1) || j==0 || j==i-1)
        cout<<".  ";
        else 
        cout<<"   ";
    }
    cout<<"\n";
}

// your code goes here
return 0;
}