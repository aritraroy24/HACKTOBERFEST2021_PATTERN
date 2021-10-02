// Pattern printing with ascii values corresponding to ascii numbers starting from char A
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void contalpha(int n)
{
    int a = 1, b = 0;
    int num = 65;
    char alpha = char(num);
    while (a <= n)
    {
        while (b <= a - 1)
        {
            cout << alpha << " ";

            // increasing the values of the loop after every Iteration
            alpha++;
            b++;
        }
        b = 0;
        a++;

        // Ending line
        cout << endl;
    }
}

// Driver Code
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Function Call
    contalpha(n);
    return 0;
}