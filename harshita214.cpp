#include <iostream>
using namespace std;

#include<iostream>
using namespace std;
int main()
{
    int row, col, i=1, j=0, arr[5], arrTemp[5];
    arr[0] = 1;
    arr[1] = 1;
    for(row=0; row<5; row++)
    {
        for(col=4; col>row; col--)
            cout<<" ";
        for(col=0; col<=row; col++)
        {
            if(row==0)
                cout<<"1";
            else
            {
                if(col==0 || col==row)
                    cout<<"1 ";
                else
                {
                    arrTemp[i] = arr[j]+arr[j+1];
                    cout<<arrTemp[i]<<" ";
                    i++;
                    j++;
                }
            }
        }
        cout<<endl;
        arrTemp[i] = 1;
        if(row>1)
        {
            j=0;
            arr[j]=1;
            for(j=1, i=1; j<=row; j++, i++)
                arr[j] = arrTemp[i];
            i=1;
            j=0;
        }
    }
    cout<<endl;
    return 0;
}