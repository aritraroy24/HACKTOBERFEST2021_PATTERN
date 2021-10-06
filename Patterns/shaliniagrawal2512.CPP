#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pattern(int row)
{
    // number of rows in pattern
    for(int i=row; i>0; i--)
    {
        //number of columns in pattern
        for(int j=i; j>0; j--)
        {
            //printing the required number
            cout<<j<<" ";
        }
        //line break
        cout<<endl;
    }
}
signed main()
{
    //user input for number of rows in pattern
    cout<<"enter number of rows: ";
    int n;
    cin>>n;
    //calling a function for printing pattern
    pattern(n);
    return 0;
}
