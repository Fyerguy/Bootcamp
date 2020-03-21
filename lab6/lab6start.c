// Catalogue the number of distinct words in a file and
// also count the occurrences of each.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int parse1Word(char [], int); // Couple of function prototypes
char myUpperCase(char);

struct wordLog {  // A struct that catalogues a single word
	char * thisWord; // A pointer to the "string", which is of varying length
	int wordCount;  // # of occurrences of this word
};

#define MAXWORDLEN 30


int main() {
	struct wordLog allWords[100];  // Array of structs, 1 struct per each distinct word
	int arrayIX;     // to index through our array of structs
	int loggedCount = 0; // Count of # of structs that have valid content

	char parsedWord[MAXWORDLEN]; // array of char[] to hold 1 word.  Problem if word has > 29 letters!
	int charsInWord; // # of chars in the word we just parsed

	int totalWords = 0; // Total # of words in the whole text file

	while ((charsInWord = parse1Word(parsedWord, MAXWORDLEN)) > 0) { // Go get 1 word
			strcmp(parsedWord, parse1Word);
			
		// See if parsedWord is the same as words already logged
		//    scan thru array of logged words, use strcmp()

		// If parsedWord is NOT yet logged, log it!
		//    adjust loggedCount to show 1 more struct is in use
		//    malloc() a char[] the right size to hold parsedWord
		//    strcpy() the parsedWord into the new char []
		//    init. the member variables of the struct that logs the parsedWord
	}

	for (arrayIX = 0; arrayIX < loggedCount; arrayIX++) { // Printf our results...
		totalWords += allWords[arrayIX].wordCount;
		printf("%d of %s\n", allWords[arrayIX].wordCount, allWords[arrayIX].thisWord);
	}
	printf("Logged %d distinct words and %d total words.\n", loggedCount, totalWords);
	return 0;
}

// Use "inclusion" logic in the following function. I.e.,
// test to see whether allowable symbols (U.C. alphas,L.C. alphas, 
// digits, apostrophe) are PRESENT in contiguous series.
int parse1Word(char aWord[], int maxSize) { // Parse a single word into buffer

	// A loop that uses getchar() to consume the sample.txt file

	// Loop must not exceed "maxsize" and must end when EOF
	// Need to strip any leading "white space" characters
	// When hit one of the ALLOWABLE symbols, word has begun
	// Keep populating aWord[], as long as contiguous ALLOWABLE chars
	// Call myUpperCase() function for each symbol in word
	// Make sure you put '\0' at end of the word!
	// return value of # of chars in aWord

	int ix = 0;
	char c;
	int stripleading = 1;
	if(++ix >= maxSize){
		c[--ix] = '\0';
		return ix;
	}
	while((c = getchar()) != EOF){
		c = myUpperCase(c);
		for(;ix < maxSize ; ix++){
			if(c >= 'a' && c <= 'z')
				c = aWord;
			if(c >='A' && c <= 'Z')
				parsedWord[ix++] = c;
		}
	}
		
			
			
	aWord[ix] = '\0'; // Show end-of-string
	return ix;
}


char myUpperCase(char c) { // If passed an ASCII char between a and z inclusive, make it U.C.
	if(c >= 'a' && c <= 'z')
		c &= ~0x20;
	return c;
	// Is this char in the right range?
	// If so, use the & operator and a bit mask to convert to U.C.
	// return the char to caller
}
