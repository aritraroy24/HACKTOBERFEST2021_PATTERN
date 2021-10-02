#include <iostream>

using namespace std;

int main()
{
  int i, j, n, a = 1;
  cout << "Enter the no. of rows: ";
  cin >> n;
  cout << "Floyd's Triangle with " << n << " rows" << endl;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      cout << a << " ";
      a++;
    }
    cout << endl;
  }
  return 0;
}