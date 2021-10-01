#include <iostream>
using namespace std;

int main(){
    int n;
    int i;
    cout<<"enter n:-";
    cin>>n;
    cout<<endl;

    for (i=n;i>0;i--){
        for(int j=1;j<(i+1);j++){

            cout<<j<<" ";

        }
        cout<<endl;
    }
    return 0;
}
