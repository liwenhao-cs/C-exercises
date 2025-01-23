/* Exercise-1-13: Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>

int main() {
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigit[c-'0'];
		} else if (c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		} else {
			++nother;
		}
	}
	printf("\thistogram\t\n");
	printf("\n");
	for (i = 0; i < 10; ++i) {
		int bar[10];
		printf("%d:\t ", i, ndigit[i]);
		for (int p = 0; p != ndigit[i]; ++p) {
			bar[p] = ndigit[i];
			printf("=", bar[p]);
		}
		printf("\n");
	}

	printf("nwhite:  ");
	for (int j = 0; j != nwhite; ++j) {
		printf("=");
	}
	printf("\n");

	printf("nother:  ");
	for (int j = 0; j != nother; ++j) {
		printf("=");
	}
	printf("\n");
	return 0;
}

// Done.

