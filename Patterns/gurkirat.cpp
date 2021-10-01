#include <iostream>
using namespace std;
 
// Function to demonstrate printing pattern
void pypart(int n)
{
    int i = 1, j = 0;
 
    // here we declare an num variable which is
    // assigned value 1
    int num = 1;
    while (i <= n) {
        while (j <= i - 1) {
 
            // Printing numbers
            cout << num << " ";
           
            // here we are increasing num for every
            // iteration.
            num++;
            j++;
        }
        j = 0;
        i++;
       
        // Ending line after each row
        cout << endl;
    }
}
 
// Driver Code
int main()
{
    int n = 5;
   
      // Function Call
    pypart(n);
    return 0;
}
