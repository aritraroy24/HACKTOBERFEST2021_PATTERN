#include<iostream>
using namespace std;

int main(){
    cout<<"Input an even number greater than 2"<<endl<<endl;;
    int n; cin>>n;
    for(int i=0; i<n+1;i++){
        for(int j=0; j<n+1; j++){
            if(i==n/2 || j==1|| j==n-1 || j==0 || j==n){
                cout<<"*";
            }
            else cout<<" ";

        }cout<<endl;
    }
    return 0;
}