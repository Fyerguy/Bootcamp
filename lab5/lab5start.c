// Reverse chars in an array, using pointers

#include <ctype.h> // This file necessary for the "toupper()" function
#include <stdio.h>
#include <string.h>

#define MAXLINE 200
char line[MAXLINE]; // Global array of char[]

int mygetline(int); // Prototype
void reverse(char []); // Prototype

int main() {

	int charsInLine;

	while ((charsInLine = mygetline(MAXLINE)) > 0) {
		reverse(line);
		printf("%s",line);
	}
	return 0;
}

void reverse(char cA[]) {  // In-place reversal of line of text
	char *inP = &cA[0];
	int x = strlen(cA);
	char *enP = &cA[x-1];
	char temp;
		while (inP < enP){
			temp = *inP;
			*inP = *enP;
			*enP = temp;
			enP--;
			inP++;
		}
		
	// Declare and init. your pointers. Need two: 1st to the base of array, 2nd to final element
	// Next is a loop.  In the loop, swap values, move pointers, determine whether done

}

int mygetline(int maxSize) { // Get single line of text into buffer

	int ix = 0;
	// 'C' uses "short-circuit" compound logic.  If 1st test fails, skips 2nd one...
	while ((line[ix] = getchar()) != '\n' && (line[ix] != EOF)){
		line[ix] = toupper(line[ix]);
		if (++ix >= maxSize) { // Buffer over-run?
			--ix;
			break;
		}
	}
	line[ix] = '\0'; // Show end-of-string in buffer
	return ix;
}


