// C++ code to demonstrate printing pattern of alphabets
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void contalpha(int n)
{
	// Initializing value corresponding to 'A'
	// ASCII value
	int num = 65;

	// Outer loop to handle number of rows
	// n in this case
	for (int i = 0; i < n; i++) {

		// Inner loop to handle number of columns
		// values changing acc. to outer loop
		for (int j = 0; j <= i; j++) {

			// Explicitely converting to char
			char ch = char(num);

			// Printing char value
			cout << ch << " ";

			// Incrementing number at each column
			num = num + 1;
		}

		// Ending line after each row
		cout << endl;
	}
}

// Driver Code
int main()
{
	int n = 5;

	// Function Call
	contalpha(n);
	return 0;
}
