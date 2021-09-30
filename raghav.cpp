#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i, z = n - 1;

    for (i = 1; i <= n; i++)
    {

        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }

        for (int j = i; j <= n; j++)
        {

            if (j == i || j == n || i == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        if (i <= 4)
        {
            for (int j = i; j <= n - 1; j++)
            {

                if (i == 1 || j == n - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    int n = 5;

    pattern(n);
    return 0;
}