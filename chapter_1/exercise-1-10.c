/* Exercise 1-10: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs anad backspaces visible in an unambiguous way. */

#include <stdio.h>

int main() {
  int c, prev_c;
  prev_c = EOF;

  while ((c = getchar()) != EOF) {
    if (c != '\t' || c != '\b' || c != '\\' ) {
      putchar(c);
      prev_c = c;
    } else if (prev_c != '\t' || prev_c != '\b' || prev_c != '\\') {
      putchar(c);
      prev_c = c;
    } if (c == '\t' || prev_c  == '\t') {
      printf("\\t");
    } if (c == '\b' || prev_c  == '\b') {
      printf("\\b");
    } if (c == '\\' || prev_c == '\\') {
      printf("\\");
  }
}
  return 0;
}

// Done.
