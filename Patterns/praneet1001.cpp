#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(){
    int height;
    char symbol;
    cout<<"Enter height : ";
    cin>> height;
    cout<<"Enter symbol : ";
    cin>> symbol;
    for(int i = 1;i<=height;i++){
        for(int j=1;j<=i;j++){
            cout<<setw(2)<<symbol;
        }
        cout<<endl;
    }
    for(int i = height;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<setw(2)<<symbol;
        }
        cout<<endl;
    }
    return 0;
}