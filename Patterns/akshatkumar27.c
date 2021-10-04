#include <stdio.h>

void TreeStarPt(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
     for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i+1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter Number of Rows: ");
    scanf("%d", &n);

    TreeStarPt(n);
    printf("\n");

    return 0;
}
