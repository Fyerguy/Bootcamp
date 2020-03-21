	.text
	.globl oneDigit
	.type 	oneDigit, @function
oneDigit:
	imul	$0xa, %edi
	sub	$'0', %esi
	mov	%edi, %eax
	add	%esi, %eax
	ret	
