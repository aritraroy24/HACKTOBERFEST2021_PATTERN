#include<stdio.h> 
int main() {
 char prnt = '*';
 int i, j, k, s, sp, nos = 0, nosp = -1;
 for (i = 9; i >= 3; (i = i - 2)) {
  for (s = nos; s >= 1; s--) {
   printf("  ");
  }
  for (j = 1; j <= i; j++) {
printf("%2c", prnt);
}
for (sp = nosp; sp >= 1; sp--) {
   printf("  ");
  }
  for (k = 1; k <= i; k++) {
 if (i == 9 && k == 1) {
continue;
}
printf("%2c", prnt);
}
nos++;
nosp = nosp + 2;
printf("\n");
}
nos = 4;
for (i = 9; i >= 1; (i = i - 2)) {
  for (s = nos; s >= 1; s--) {
   printf("  ");
  }
  for (j = 1; j <= i; j++) {
   printf("%2c", prnt);
  }
  nos++;
  printf("\n");
 }

 return 0;
}