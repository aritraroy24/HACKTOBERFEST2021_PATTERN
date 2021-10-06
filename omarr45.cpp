#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "OMARR45";
    for(int i=0; i<name.length(); i++) {
        for(int j=0; j<name.length(); j++) {
            if(i==3) {
                cout << name[j];
            } else if (j==3) {
                cout << name[i];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
