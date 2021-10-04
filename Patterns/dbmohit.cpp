#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1;n>=i;i++){
        for (int k = n; k>i;k--){
            cout<<" ";
        }
        for(int j = 1; 2*i-1>=j;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
      for(int l = n;l>=1;l--){
        for(int o = 1;n-l>=o;o++){
            cout<<" ";
        }
        for (int m = 1; 2*l-1>=m;m++){
            cout<<"*";
        }
        
        
        cout<<endl;
    }

    return 0;
}