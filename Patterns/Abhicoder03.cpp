/* Triangle Pattern */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;

    cout<<"Enter the number: ";

    cin>>n;

    int k = n;// Number of space.


    for (int i = 1; i<=n; i++) // This loop is for number of rows.
    {
        for (int j = 1; j<=n; j++) //This loop is for number of columns.
        {
            if (j >= k)
            {
                cout<< "* ";
            }
            else{
                cout<<" ";
            }
        }
        k--;
        cout<<"\n";
    }


}