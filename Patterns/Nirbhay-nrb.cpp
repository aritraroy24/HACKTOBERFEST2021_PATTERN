#include<iostream>
#include<string>
using namespace std;

int main() {
    string text = "HACKTOBERFEST2021";
    int n = text.length();
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<text[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}