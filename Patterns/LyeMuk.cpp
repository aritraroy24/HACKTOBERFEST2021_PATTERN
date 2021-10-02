#include<iostream>
using namespace std;
int main()
{
    int i,j,lin=0;
    cout<<"Enter the no: ";
    cin>>lin;
    for(i=1;i<=lin;i++){
        for(j=1;j<=lin;j++){
            if((j==i)||(j==(lin+1)-i))
                cout<<i;
            else
                cout<<" ";
            }
            cout<<endl;
        }
    return 0;
}