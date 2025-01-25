/* Exercise-1-13: Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LENGTH 100

int main() {
	
	// ==========defining variables:
	
	int word_length_array[MAX_LENGTH]; // An array has an index (address) and a value for that index.
	int input, word_length, word_length_limit, state;
	int i, j; 

	input = word_length = word_length_limit = 0;
	state = OUT;
	
	// ==========initalize:
	
	for (i = 0; i < MAX_LENGTH; ++i) {
		word_length_array[i] = 0; // In this case, this for loop is used to set the value '0' to all addresses.
	}

	while ((input = getchar()) != EOF) {
		if (input == ' ' || input == '\n' || input == '\t') {
			state = OUT;
			if (word_length > 0 && word_length < MAX_LENGTH) {
				if (word_length > word_length_limit) 
						word_length_limit = word_length;
				word_length_array[word_length]++;
			}
			word_length = 0;
		} else {
			state = IN;
			word_length++;
		}
	}
	
	for (i = 0; i < MAX_LENGTH; ++i) {
		printf("%d: ", i);
		
		for (j = 0; j < word_length_array[i]; ++j) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}	

// Done.
