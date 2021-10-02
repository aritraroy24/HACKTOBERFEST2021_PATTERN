#include <iostream>
using namespace std;

void pypart(int n)
{
	int i = n, j = 0;
	while (i > 0) {

		while (j < i) {

			cout << "* ";
			j++;
		}
		j = 0;
		i--;
		cout << endl;
	}
}

int main()
{
	int n = 5;
	pypart(n);
	return 0;
}
