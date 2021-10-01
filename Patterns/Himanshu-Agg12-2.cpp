#include <bits/stdc++.h>
using namespace std;
 
void ganesha(int row, int col)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            
            if (i < row / 2) {
                
                if (j < col / 2) {
                    
                if (j == 0)
                    cout << "*";
                    
                else
                    cout << " " << " ";
                }
                
                else if (j == col / 2)
                cout << " *";
                else
                {
                if (i == 0)
                    cout << " *";
                }
            }
            else if (i == row / 2)
                cout << "* ";
            else {
                
                if (j == col / 2 || j == col - 1)
                cout << "* ";
                
                else if (i == row - 1) {
                    
                if (j <= col / 2 || j == col - 1)
                    cout << "* ";
                else
                    cout << " " << " ";
                }
                else
                cout << " " << " ";
            }
        }
        cout << "\n";
    }
}
 
int main()
{
    cout << "Enter row and column\n";

   int row, col;

   cin >> row >> col;
    
   ganesha(row, col);
    
   return 0;
}