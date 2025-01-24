/* Exercise-1-14: Write a program to print a histogram of the frequencies of different characters in its input. */

#include <stdio.h>
#define MAX_CHAR 128 //(0-127)

int main() {
	int c, i, j, k;
	int characters[MAX_CHAR];
	// Setting all 128 elements from the array 'characters' to zero.
	for (i = 0; i < MAX_CHAR; ++i) {
		characters[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		// Getting the ASCII value from getchar.
		// For example, 'a' -> ASCII 97 => characters[97] = 0 (adding one) => characters[97] = 1
		// If I press 'a' again, it access the element 97 (character[97]) and add one again, and so on.
		characters[c] = characters[c] + 1; // This is probably the same as characters[c]++;
	}

	for (j = 0; j < MAX_CHAR; ++j) {
		// Prints out all elements from the array.
		putchar(j); // <-- this represents the element in the 'j' position.
		printf(" ");
		for (k = 0; k < characters[j]; ++k) {
			putchar('*');
		}
		putchar('\n');
	}

return 0;
}

// done.

