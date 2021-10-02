#include <bits/stdc++.h>
using namespace std;

void SpiralMatrix(int n)  //Pattern for spiral Matrix Pattern
{
    vector<vector<int>> mat(n, vector<int>(n, 0));

    int Top = 0, Bottom = n - 1, Left = 0, Right = n - 1;
    int dir = 0; //variable for 4 direction
    int count = 1;


    while (Top <= Bottom && Left <= Right)
    {
        if (dir == 0)
        {
            for (int i = Left; i <= Right; i++)
                mat[Top][i] = count++;
            Top++;
            dir = 1;
        }
        else if (dir == 1)
        {
            for (int i = Top; i <= Bottom; i++)
                mat[i][Right] = count++;
            Right--;
            dir = 2;
        }
        else if (dir == 2)
        {
            for (int i = Right; i >= Left; i--)
                mat[Bottom][i] = count++;

            Bottom--;
            dir = 3;
        }
        else if (dir == 3)
        {
            for (int i = Bottom; i >= Top; i--)
                mat[i][Left] = count++;

            Left++;
            dir = 0;
        }
    }

    for(int i=0;i<n;i++)  // print the pattern
    {
        for(int j=0;j<n;j++)
        cout<<setw(3)<< mat[i][j]<<" ";
        cout<<endl;
    }

}

int main()
{
    int n;
    cin>>n;
    SpiralMatrix(n); //call the pattern function
}