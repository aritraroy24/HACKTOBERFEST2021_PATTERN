#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of rows :  ";
  cin >> n;

  int i, j, k = n;
  cout << "\n";
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      if (j >= k)
        cout << "* ";
      else
        cout << " ";
    }
    k--;
    cout << "\n";
  }

  return 0;
}
