// Pascal's Triangle
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num_items;
    cin >> num_items;
    int pyr_arr[num_items][num_items];
    for (int j = 0; j < num_items; ++j){
        for(int space = 0; space <= num_items - j; ++space) cout << " ";
        for (int i = 0; i <= j; i++){
            if (j == i || i == 0)
                pyr_arr[j][i] = 1;
            else
                pyr_arr[j][i] = pyr_arr[j - 1][i - 1] + pyr_arr[j - 1][i];

            cout << pyr_arr[j][i] << " ";
        }
        cout << "\n";
    }
}
