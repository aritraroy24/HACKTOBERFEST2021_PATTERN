#include<bits/stdc++.h>
using namespace std;
void Pattern(){
    for (int i = 0; i<7;  i++){                      // i == Number of rows
        for (int j = 0; j<5; j++){                  // j == Number of columns in pattern
            if(j==0 || j==i-2 || j==4-i){
                cout<<" * ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    cout<<"print of letter K :"<<endl;
    Pattern();

    return 0;
}