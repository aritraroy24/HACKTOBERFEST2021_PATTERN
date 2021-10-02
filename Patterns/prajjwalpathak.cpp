/*
Program to print a pattern
Author: Prajjwal Pathak
Programming Language: C++
Date Modified: 1st October 2021
*/

#include <iostream>

using namespace std;

int main()
{
    int i, j, k = -1;
    for (i = 0; i < 31; i++)
    {
        for (j = 0; j < 31; j++)
        {
            if (j == i || i + j == 31 || i == 0 || j == 0 || i == 30 || j == 30)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    return 0;
}