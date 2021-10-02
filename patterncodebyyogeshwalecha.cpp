#include<bits/stdc++.h>
using namespace std;
printn(int n){
	for(int i=n;i>=1;i--){
		for(int j=0;j<i*3;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
		for(int k=0;k<i*2;k++){
			cout<<"*"<<" ";
		}
		cout<<endl;
		for(int m=0;m<i;m++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
int main(){
	printn(6);
   	return 0;
}
