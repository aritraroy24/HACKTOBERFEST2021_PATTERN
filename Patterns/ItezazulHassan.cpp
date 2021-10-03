#include<iostream>
using namespace std;
int main(){
  int n=0;
  cout<<"Enter number: ";
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
      cout<<" ";
    }
    for(int j=0;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i=n-1;i>0;i--){
    for(int j=n-1;j>=i;j--){
      cout<<" ";
    }
    for(int j=0;j<i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}