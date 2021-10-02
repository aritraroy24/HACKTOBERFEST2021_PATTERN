#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        for(int i=1;i<=p;i++){
            for(int j=1;j<=p;j++){

                if(j<=i){
                    cout<<"*";
                }
                else
                {
                    cout<<"#";
                }

            }
            for(int k=p;k>0;k--){

                if(k>i){
                    cout<<"#";
                }
                else{
                    cout<<"*";
                }

            }
            cout<<endl;
        }
    }
}