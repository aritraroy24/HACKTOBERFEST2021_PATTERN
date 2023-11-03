#include <iostream>
using namespace std;
int main()
{
    int rows,i,space,stars;
    cout << "Enter the number of rows" << endl;
    cin >> rows;
    for(i=1;i<=rows;i++)
    {
        for(space=i;space<rows;space++)
        {
            cout << " ";
        }
        for(stars=1;stars<=(2*rows-1);stars++)
        {
            if(i==rows || stars==1 || stars==(2*i-1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}