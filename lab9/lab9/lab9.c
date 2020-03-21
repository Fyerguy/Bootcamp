// Convert a base-10 digit string to an integer

#include <stdio.h>

int oneDigit(int, char);

void strToInt(int * putHere, char * argVal) {
	int temp = 0;
	int ix;
	char aChar;
	for (ix = 0;  ; ix++) {
		aChar = argVal[ix];
		if (aChar == 0)
			break;
		temp = oneDigit(temp, aChar);
	}
	*putHere = temp;
}

int main() {

	int myInt;
	strToInt(&myInt, "7654321");
	printf("%d", myInt);
	return 0;
}
