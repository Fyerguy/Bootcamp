// Use bit-mask to create UC chars from LC

char myUpperCase(char c) { // If passed an ASCII char between a and z inclusive, make it U.C.
	if (c >= 'a' && c <= 'z')
		c &= ~0x20; // Bit operator, mask off hex 20
	return c;
}
