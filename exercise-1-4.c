/* Exercise 1-4: Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Celsius to Fahrenheit table.\n");

  while (celsius <= upper) {
    fahr = celsius * (9.0/5.0) + 32; 
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  
  return 0;
}

// Done.
