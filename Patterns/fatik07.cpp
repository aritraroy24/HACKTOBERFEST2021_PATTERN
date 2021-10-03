#include <iostream>

using namespace std;

int main()
{
    int i,j,n;

    cout << "====== Program huruf X sesuai user ====== \n\n";
    cout << "Masukkan nilai N : ";
    cin >> n;
    cout << "Pattern Program \n\n";

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)

        {
            cout << " X ";
        }

        cout << endl;
    }
    cout << "\n";

    return 0;
}

