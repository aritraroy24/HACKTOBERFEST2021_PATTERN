#include <stdio.h>
int main() {
 char p = '*';
 int i, j, s, no = 0;
 for (i = 9; i >= 1; (i = i - 2)) {
  for (s = no; s >= 1; s--) {
   printf("  ");
  }
  for (j = 1; j <= i; j++) {
   if ((i % 2) != 0 && (j % 2) != 0) {
    printf("%2c", p);
   } else {
    printf("  ");
   }
  }
  printf("\n");
  no++;
 }
 no = 3;
 for (i = 3; i <= 9; (i = i + 2)) {
for (s = no; s >= 1; s--) {
   printf("  ");
  }
  for (j = 1; j <= i; j++) {

   if ((i % 2) != 0 && (j % 2) != 0) {
    printf("%2c", p);
   } else {
    printf("  ");
   }
  }
  no--;
  printf("\n");
 }
 return 0;
}
