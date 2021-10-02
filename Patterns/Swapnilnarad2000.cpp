#include <bits/stdc++.h>
using namespace std;

// pascal triangle
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int combinatorics(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

void pascalTriangle(int t)
{
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t - i; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
        {
            cout << combinatorics(i, j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin>>n;
    pascalTriangle(n);
    return 0;
}
