/* Exercise 1-5: Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0. */

#include <stdio.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = upper;
  printf("Celsius to Fahrenheit table.\n");

  while (celsius >= lower) {
    fahr = celsius * (9.0/5.0) + 32; 
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius - step;
  }
  
  return 0;
}

// Done 
