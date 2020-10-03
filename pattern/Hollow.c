
#include <stdio.h>

int main() {
  int i, j, N;

  /* Input number of rows from user */
  printf("Enter number of rows: ");
  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    /* Print trailing spaces */
    for (j = 1; j < i; j++) {
      printf(" ");
    }

    /* Print hollow rhombus */
    for (j = 1; j <= N; j++) {
      if (i == 1 || i == N || j == 1 || j == N)
        printf("*");
      else
        printf(" ");
    }

    printf("\n");
  }

  return 0;
}
Output