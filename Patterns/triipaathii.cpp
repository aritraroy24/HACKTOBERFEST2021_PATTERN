#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    cout<<endl;
    
    //for upper triangle
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        for(int k=i;k>0;k--){
            if (k%2==0)
            cout<<"| ";
            else
            cout<<1<<" ";
        }
        for(int k=2;k<=i;k++){
            if (k%2==0)
            cout<<"| ";
            else
            cout<<1<<" ";
        }
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    //For lower triangle
    for(int i=n-1;i>0;i--){
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        for(int k=i;k>0;k--){
            if (k%2==0)
            cout<<"| ";
            else
            cout<<1<<" ";
        }
        for(int k=2;k<=i;k++){
            if (k%2==0)
            cout<<"| ";
            else
            cout<<1<<" ";
        }
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}