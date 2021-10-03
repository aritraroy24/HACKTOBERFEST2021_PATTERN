#include <bits/stdc++.h>
using namespace std;

int f(int x, int y) { return sqrt(pow(x, 2) + pow(y, 2)); }

int main() {
  int c = 0;
  int r = 10;
  const int wdt = r, length = r * (double)(3 / 2);
  for (int y = wdt; y >= -wdt; y = y - 2) {
    for (int x = -length; x <= length; x++) {
      if (f(x, y) == r)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}
