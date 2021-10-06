/*
      11
     1212
    123123
   12341234
  1234512345
 123456123456
  1234512345
   12341234
    123123
     1212
      11
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows: " ;
    cin >> n;
    for(int i=1;i<2*n;i++){
        int k = i;
        if(k>n) k = 2*n-k;
        for(int j=1;j<=n-k;j++) cout << "  ";
        for(int j=1;j<=k;j++) cout << j << " ";
        for(int j=1;j<=k;j++) cout << j << " ";
        cout << endl;
    }
}