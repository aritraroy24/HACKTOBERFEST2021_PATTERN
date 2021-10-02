#include <iostream>
using namespace std;

int main()
{
    int a;
    int ch = 65;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)ch << " ";
        }
        ch++;
        cout << endl;
    }

    return 0;
}
