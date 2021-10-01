import 'dart:io';

void main() {
  int height = 10;
  int i, j, counter = 0;
  for (i = 0; i < height; i++) {
    stdout.write("*");
    for (j = 0; j <= height; j++) {
      if (j == height)
        stdout.write("*");
      else if (j == counter || j == height - counter - 1)
        stdout.write("*");
      else
        stdout.write(" ");
    }
    if (counter == height ~/ 2) {
      counter = -99999;
    } else {
      counter++;
    }
    stdout.write("\n");
  }
}
