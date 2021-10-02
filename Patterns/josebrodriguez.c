/*
 * Prints a christmas tree compsed of two triangles and a rectangle
 *
 * By: Jose Rodriguez
 *
 */

#include <stdio.h>
#define MIDDLE 8

void print_triangle();
void print_rectangle();

int main() {
  print_triangle();
  print_triangle();  
  print_rectangle();

  return 0;
}

void print_triangle(){ // print an equilateral triangle using a char
  int num_spaces=MIDDLE-1;
  int num_chars = 1;
  char selected_char = '#';
  int i, j;
  for(i = num_spaces; i>0 ;i--){
    for(j = 0; j < i;j++){
      fprintf(stdout," ");
    }
    for(j=0; j < num_chars; j++){
      fprintf(stdout,"%c", selected_char);
    }
    num_chars+=2;
    fprintf(stdout,"\n");
  }

}

void print_rectangle(){ // print a rectangle using a char
  int num_spaces = MIDDLE-2;
  int num_chars = 3;
  int num_lines = 4;
  char selected_char = '#';
  int i,j;
  for (i = 0; i < num_lines; i++){
    for(j = 0; j<num_spaces;j++){
      fprintf(stdout," ");
    }
    for(j = 0; j < num_chars; j++){
      fprintf(stdout, "%c", selected_char);
    }
    fprintf(stdout, "\n");
  }
}


