// C++ program to print
// number in digital form
#include <iostream>
#include <vector>
using namespace std;

// Function to print numbers
void print(int mat[][5])
{

	// If in matrix row number is even then print "-"
	// otherwise print "|"
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i % 2 == 0) {
				if (mat[i][j] == 1)
					cout << "-";
				else
					cout << " ";
			}
			else {
				if (mat[i][j] == 1)
					cout << "|";
				else
					cout << " ";
			}
		}
		cout << endl;
	}
}
void digit0()
{
	// In matrix 0 used for space
	// and 1 for either - or |
	int mat[5][5] = { { 0, 1, 0, 1, 0 },
					{ 1, 0, 0, 0, 1 },
					{ 0, 0, 0, 0, 0 },
					{ 1, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 } };
	print(mat);
}
void digit1()
{
	// In matrix 0 used for space
	// and 1 for either - or |
	int mat[5][5] = { { 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 },
					{ 0, 0, 0, 0, 0 } };
	print(mat);
}
void digit2()
{
	// In matrix 0 used for space
	// and 1 for either - or |
	int mat[5][5] = { { 0, 1, 0, 1, 0 },
					{ 0, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 },
					{ 1, 0, 0, 0, 0 },
					{ 0, 1, 0, 1, 0 } };
	print(mat);
}
void digit3()
{
	// In matrix 0 used for space
	// and 1 for either - or |
	int mat[5][5] = { { 0, 1, 0, 1, 0 },
					{ 0, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 },
					{ 0, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 } };
	print(mat);
}
void digit4()
{
	// In matrix 0 used for space
	// and 1 for either - or |
	int mat[5][5] = { { 0, 0, 0, 0, 0 },
					{ 1, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 },
					{ 0, 0, 0, 0, 1 },
					{ 0, 0, 0, 0, 0 } };
	print(mat);
}
void digit5()
{
	// In matrix 0 used for space
	// and 1 for either - or |
	int mat[5][5] = { { 0, 1, 0, 1, 0 },
					{ 1, 0, 0, 0, 0 },
					{ 0, 1, 0, 1, 0 },
					{ 0, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 } };
	print(mat);
}
void digit6()
{
	// In matrix 0 used for space
	// and 1 for either - or |
	int mat[5][5] = { { 0, 1, 0, 1, 0 },
					{ 1, 0, 0, 0, 0 },
					{ 0, 1, 0, 1, 0 },
					{ 1, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 } };
	print(mat);
}
void digit7()
{
	// In matrix 0 used for space
	// and 1 for either - or |
	int mat[5][5] = { { 0, 1, 0, 1, 0 },
					{ 0, 0, 0, 0, 1 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 1 },
					{ 0, 0, 0, 0, 0 } };
	print(mat);
}
void digit8()
{
	// In matrix 0 used for space
	// and 1 for either - or |
	int mat[5][5] = { { 0, 1, 0, 1, 0 },
					{ 1, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 },
					{ 1, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 } };
	print(mat);
}
void digit9()
{
	// In matrix 0 used for space
	// and 1 for either - or |
	int mat[5][5] = { { 0, 1, 0, 1, 0 },
					{ 1, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 },
					{ 0, 0, 0, 0, 1 },
					{ 0, 1, 0, 1, 0 } };
	print(mat);
}

// Function to check number
void checkDigit(int num)
{
	// for digit 0
	if (num == 0)
		digit0();

	// for digit 1
	else if (num == 1)
		digit1();

	// for digit 2
	else if (num == 2)
		digit2();

	// for digit 3
	else if (num == 3)
		digit3();

	// for digit 4
	else if (num == 4)
		digit4();

	// for digit 5
	else if (num == 5)
		digit5();

	// for digit 6
	else if (num == 6)
		digit6();

	// for digit 7
	else if (num == 7)
		digit7();

	// for digit 8
	else if (num == 8)
		digit8();

	// for digit 9
	else if (num == 9)
		digit9();
}

// Driver program
int main()
{
	// Input a number
	int num ;
    cout << "Enter a number : ";
    cin >> num;
	// function call to check digit
	checkDigit(num);

	return 0;
}
