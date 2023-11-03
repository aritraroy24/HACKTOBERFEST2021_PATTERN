
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    { int q=(i+1)*3;
        cout << endl;
        for (int j = 1; j <= m; j++)
        {
            if (i != ((n / 2) + 1))
            {    
                if (j > ((m / q)) * 3 && j < (((m / q) +1) *3))
                {
                    
                    
                         for (int k = 1; k <= i; k++)
                    {
                        cout << ".|.";
                        j = j + 2;
                    }
                     
                    
                }
                else 
                {
                    cout << "-";
                }
            }
            else
            {
                
               
                    if (j > ((m - 7) / 2) && j < (((m - 7) / 2) + 7))
                    {
                        cout << "WELCOME";
                        j = j + 7;
                    }
                    else
                    {
                        cout << "-";
                    }

                
            }
                 
        }
    }
}