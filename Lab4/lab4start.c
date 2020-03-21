// Count # of occurrences of "the" in a text file
#include <ctype.h>
#include <stdio.h> // Supports getchar() and printf()
#include <string.h> // library routines that handle "string"

#define MAXLINE 200
char line[MAXLINE]; // Global array of char[] will hold 1 line of file

int mygetline(int); // Prototype

int main() {
	// Declare variables, including "count" of "the"

	// Your loop(s) to repeatedly call mygetline(), and to
	// then examine the line of text with strncmp()

	// printf your result
	int count = 0;
	int i;
	int charsInLine;
	while((charsInLine = mygetline(MAXLINE)) > 0){
		for (i = 0; line[i]; i++){
			if(strncmp("the", &line[i], strlen("the"))==0)
				count++;
			printf("%c", line[i]);			
		}
	}
	printf("\n\n%d = # of occurences of \"the\" in the file. \n", count); 
	return 0;
}

int mygetline(int maxSize) { // Get 1 line of text into global line[]
	int i = 0;
	
	while ((line[i] = getchar()) != '\n' && (line[i] != EOF)){
		line[i] = tolower(line[i]);
		if(++i >= maxSize){
			line[--i] = '\0';
			return i;
		}
	}
	line[i] = '\0';
	return i;	 
	// Your loop(s) that use getchar() to fetch chars into line[] array
	// Your code that ALSO converts all alpha chars to lower-case
	// Your code must terminate the line with a '\0' character!
	// return # valid chars in line[]
}

