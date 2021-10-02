#include<iostream>
using namespace std;


void print_pattern(int val){
    for(int x = 1; x<=val;x++){

        for(int y=1;y<=(2*val);y++){

            if(x> (val-y+1)) cout<<" ";
            else cout<<"*";

            if((x+val)>y) cout<<" ";
            else cout<<"*";

        }

        cout<<endl;

    }
    for(int i = 0; i<=val;i++){

        for(int j=1;j<=(2*val);j++){

            if(i<j) cout<<" ";
            else cout<<"*";

            if(i<=((2*val)-j)) cout<<" ";
            else cout<<"*";

        }

        cout<<endl;

    }
}

int main() {

    int val;
    cout<<"Enter the size of the pattern (it is equal to half of the sde length in the unit of no. of stars ) : ";
    cin>>val;

    print_pattern(val);
    
    return 0;

}