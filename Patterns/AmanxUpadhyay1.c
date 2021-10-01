#include <stdio.h>

void AdjacentTriangleStarPtt(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 2 * (n - i); j >= 0; j--) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter Number of Rows: ");
    scanf("%d", &n);

    printf("\n");
    AdjacentTriangleStarPtt(n);

    return 0;
}