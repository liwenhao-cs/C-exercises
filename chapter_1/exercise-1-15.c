// Exercise-1-15: Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
#include <stdio.h>

// function prototype:
void temperature_function(int initial_value, int final_value);

void temperature_function(int initial_value, int final_value) {
	float fahr;
	float min = initial_value;
	float max = final_value;
	int step = 20;
	float cel;

	fahr = min;
	while (fahr < max) {
		cel = (5.0/9.0) * (fahr - 32.0);
		printf("fahr: %.2f \t cel: %.2f \n", fahr, cel);
		fahr += step;
	}
}

int main() {
	int initial_value, final_value;
	scanf("%d", &initial_value);
	scanf("%d", &final_value);
	temperature_function(initial_value, final_value);
	return 0;
}

// done.
