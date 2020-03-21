// Catalogue the number of distinct words in a file and
// also count the occurrences of each.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char myUpperCase(char);
extern char myLowerCase(char);

int parse1Word(int); // Couple of function prototypes
char myLowerCase(char);

struct wordLog {  // A struct that catalogues a single word
	char * thisWord; // A pointer to the "string", which is of varying length
	int wordCount;  // # of occurrences of this word
};

struct wordLog allWords[100];  // Array of structs, 1 struct per each distinct word

char parsedWord[30]; // Global array of char[] to hold 1 word.  Problem if word has > 29 letters!

int main() {

	int charsInWord; // # of chars in the word we just parsed
	int arrayIX;     // to index through our array of structs
	int loggedCount = 0; // Count of # of structs that have valid content
	int totalWords = 0; // Total # of words in the whole text file

	while ((charsInWord = parse1Word(30)) > 0) { // Go get 1 word
		for (arrayIX = 0; arrayIX < loggedCount; arrayIX++) { // Scan all words logged so far
			if (strcmp(allWords[arrayIX].thisWord, parsedWord) == 0) { // Found duplicate
				allWords[arrayIX].wordCount++;
				break;
			}
		}
		if (arrayIX == loggedCount) { // Word wasn't in array yet
			allWords[arrayIX].thisWord = (char *) malloc(charsInWord+1); // Get storage for word
			strcpy(allWords[arrayIX].thisWord, parsedWord); // Copy it into the space
			allWords[arrayIX].wordCount = 1; // This is first occurrence...
			loggedCount++; // AND now using one more slot in array
		}
	}

	for (arrayIX = 0; arrayIX < loggedCount; arrayIX++) { // Printf our results...
		totalWords += allWords[arrayIX].wordCount;
		printf("%d of %s\n", allWords[arrayIX].wordCount, allWords[arrayIX].thisWord);
	}
	printf("Logged %d distinct words and %d total words.\n", loggedCount, totalWords);
	return 0;
}

// Using an affirmative inclusion algorithm for following function. I.e.,
// I specify certain characters that ARE legal within a word.  U.C. alphas,
// L.C. alphas, digits, and the apostrophe.
int parse1Word(int maxSize) { // Parse a single word into buffer

	int ix = 0;
	char c;
	int stripLeading = 1; // A flag to show whether I'm parsing white space
	do {
		if (ix >= maxSize) { // Whoops... exceeded buffer length
			parsedWord[--ix] = '\0'; // Placing "end-of-string" in buffer
			return ix;
		}
		c = getchar(); // Put char into temp
		if (c == EOF)
			break;
		c = myLowerCase(c);
		//c = myUpperCase(c);
		if (    (c >= 'a' && c <= 'z')
		     || (c >= 'A' && c <= 'Z')
		     || (c >= '0' && c <= '9')
		     || c == '\'') {
			stripLeading = 0; // Past white space, getting real chars.
			parsedWord[ix++] = c;
			continue;
		}
		if (!stripLeading) // Now have NON-word char AFTER a word. Break!
			break;
	} while (1);
	parsedWord[ix] = '\0'; // Show end-of-string in buffer
	return ix;
}


