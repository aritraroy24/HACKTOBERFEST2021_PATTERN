#include <iostream>
using namespace std;
int main()
{
    int n, i, j, space, count = 1, num = 0, star = 8;
    cin >> n;
    space = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= star; j++)
            if (i + j <= star + 1)
                cout << "*";
        num++;
        for (j = 1; j <= i; j++)
        {
            cout << num;
            if (i > 1 && count < i)
            {
                cout << "*";
                count++;
            }
        }
        for (j = 1; j <= star; j++)
            if (i + n <= j + n)
                cout << "*";
        cout << endl;
        space--;
        count = 1;
    }
    return 0;
}