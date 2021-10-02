//Character pattern
// C++ code to demonstrate printing pattern of alphabets
#include <iostream>
using namespace std;

void alphabet(int n)
{
	
	int num = 65;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			char ch = char(num);
			cout << ch << " ";
		}
		num = num + 1;
		cout << endl;
	}
}
int main()
{
	int n = 5;
	alphabet(n);
	return 0;
}
