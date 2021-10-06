#include <iostream>
using namespace std;

//runner function
void pypart2(int n)
{
	// number of spaces
	int k = 2 * n - 2;


	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n-i; j++)
			cout << " ";

		k = k - 2;

		for (int j = 0; j < i; j++) {
			cout << "* ";
		}

		cout << endl;
	}
}

// Driver Code
int main()
{
	int n = 5;

	// Function Call
	pypart2(n);
	return 0;
}
