#include <iostream>
using namespace std;

int main(){
    int i,j,k=1;
    cout<<"Floyd's Triangle :- \n";
    for(i=0;i<=4;i++){
        for(j=0;j<=i;j++){
            cout<<k<<" ";
            k++;
        } 
        cout<<"\n"; 
    }
}
