#include <iostream>
using namespace std;

int main(){
    int size;
    int spaces;
    cout << "Enter the your christmas three size: ";
    cin >> size;

    for(int i = size; i >= 0; i--){

        if(size % 2 == 0)
            spaces = i/2;
        else
            spaces = i/2;
            spaces++;
        
        for(int j = 0; j < spaces; j++){
            cout << "  ";
        }
        for(int j = i; j < size; j++){
            cout << "* ";
        }
        cout << endl;
    }

    if(size > 5)
        for(int i = 0; i < size/2; i++){
            for(int j = 0; j < size/2; j++)
                cout << "  ";
            cout << "***" << endl;
        }
    else
        for(int i = 0; i < size/2; i++){
            for(int j = 0; j < size/2; j++)
                cout << "  ";
            cout << "*" << endl;
            }

    for(int i = 0; i < size*2; i++)
        cout << "*";
        
    cout << endl;

    return 0;
}