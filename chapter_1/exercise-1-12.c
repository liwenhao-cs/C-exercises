/* Exercise 1-12: Write a program that prints its input one word per line. */

#include <stdio.h>

int main() {
  int c, prev_c, nl, nw;

  nl = 0;
  nw = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      putchar('\n');
    }
    putchar(c);
  }
  return 0;
}

// Done.