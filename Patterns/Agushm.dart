import 'dart:io';

void main() {
  int rows = 7;
  int mid = 4;
  int i, j, k;
  for (i = 0; i <= rows; i++) {
    if (i < mid) {
      for (j = (rows - i); j > 1; j--) {
        stdout.write(" ");
      }
      for (k = 0; k <= i; k++) {
        stdout.write("* ");
      }
      stdout.writeln();
    } else {
      for (j = 0; j < i; j++) {
        stdout.write(" ");
      }
      for (k = i; k <= rows - 1; k++) {
        stdout.write("* ");
      }
      stdout.writeln("");
    }
  }
}
