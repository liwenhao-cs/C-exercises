/* Exercise 1-9: Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

#include <stdio.h>

int main() {
  int c; 
  int prev_c = EOF;

  // Variable 'c' is used for getchar().
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
      prev_c = c;
    } else if (prev_c != ' ') {
      putchar(c);
      prev_c = c;
    }
  }
  return 0;
}

// Done.
