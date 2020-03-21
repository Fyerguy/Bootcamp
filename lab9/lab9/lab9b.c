// Convert a base-10 digit string to an integer


int oneDigit(int inVal, char inChar) {
	inVal *= 10;
	inVal += (inChar - '0');
	return inVal;
}

