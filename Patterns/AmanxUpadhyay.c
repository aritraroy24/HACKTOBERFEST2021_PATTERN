#include <stdio.h>

void RightTriangleStarPtt(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter Number of Rows: ");
    scanf("%d", &n);

    RightTriangleStarPtt(n);
    printf("\n");

    return 0;
}