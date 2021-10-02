// WAP to print pattern of Hollow Diamond

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    
    // Upper portion of pattern
    for(int i=0; i<n;i++){
        for(int j=0; j<(2*n); j++){
            if((i+j)<=n-1)              // Upper Left Triangle        
            {
                cout<<"o";
            }
            else{
                cout<<" ";
            }
            if((i+n)<=j)                // Upper Right Triangle
            {
                cout<<"o";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    // Bottom portion of pattern
    for(int i=0; i<n;i++){
        for(int j=0; j<(2*n); j++){
            if(i>=j)                    // Bottom Left Triangle
            {
                cout<<"o";
            }
            else{
                cout<<" ";
            }
            if(i>=((2*n)-1)-j)          // Bottom Right Triangle
            {
                cout<<"o";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}