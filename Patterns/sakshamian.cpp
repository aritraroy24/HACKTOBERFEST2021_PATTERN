#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {

                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                    cout << " ";
            }
        }
        cout << '\n';
    }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}