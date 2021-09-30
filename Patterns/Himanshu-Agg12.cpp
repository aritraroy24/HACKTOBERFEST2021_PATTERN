#include <iostream>

using namespace std;

void printPattern(int n){

    int start = 1;
 
    //Number of rows in pattern 
    for (int row = 0; row < n; row++) {
 
        //Number of columns in pattern
        for (int col = 0; col <= row; col++) {
            // Print the number pattern of the current row.
            cout << start << " ";
            // Increasing column count
            start = start + 1;
        }
        // For line break
        cout << endl;
    }

}

int main() {
    cout << "Enter the Number of rows of the pattern: \n";
    int n;
    cin >> n;

//calling pattern printing function
    printPattern(n);

    return 0;
}