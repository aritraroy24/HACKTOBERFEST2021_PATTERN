/*
55555
 4444
  333
   22
    1
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++) cout << setw(5)<< " " ;
        for(int j=1;j<=i;j++) cout << setw(5)<< i  ;
        cout << endl;
    }
}