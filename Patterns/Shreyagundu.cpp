#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j, k = 0;
    for (i = 0; i < n; i++)
    {
        cout << "* ";
    }
    for(i=n; i>=1;--i)
    {
        for(j=0; j < n-i; ++j)
        while (k != (2 * i - 1))
        {
            if (k == 0 || k == 2 * i - 2)
                cout << "*";
            else
                cout << " ";
            k++;

        }
        k = 0;
        cout << endl; // print next row
    }

}