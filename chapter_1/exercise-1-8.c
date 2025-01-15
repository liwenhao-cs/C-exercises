/* Exercise 1-8: Write a program to count blanks, tabs and newlines. */

#include <stdio.h>

int main() {
  int n, counting;

  counting = 0;
  while ((n = getchar()) != EOF) {
    if (n == '\n' || n == '\t' || n == ' ') {
      ++counting;
    }
  }
  printf("%d\n", counting);
  return 0;
}

// Done.
