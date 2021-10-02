//Pattern by Akshat Pandey
#include<stdio.h>
int main() {
 char prnt = '*';
 int i, j, s, nos = 0;
 for (i = 9; i >= 1; (i = i - 2)) {
  for (s = nos; s >= 1; s--) {
   printf("  ");
  }
  for (j = 1; j <= i; j++) {
   if ((i % 2) != 0 && (j % 2) != 0) {
    printf("%2c", prnt);
   } else {
    printf("  ");
   }
  }
  printf("\n");
  nos++;
 }
 nos = 3;
 for (i = 3; i <= 9; (i = i + 2)) {
for (s = nos; s >= 1; s--) {
   printf("  ");
  }
  for (j = 1; j <= i; j++) {

   if ((i % 2) != 0 && (j % 2) != 0) {
    printf("%2c", prnt);
   } else {
    printf("  ");
   }
  }
  nos--;
  printf("\n");
 }
 return 0;
}