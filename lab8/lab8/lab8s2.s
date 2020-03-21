	.text
	.globl myLowerCase
	.type	myLowerCase, @function
myLowerCase:

	cmpb	$'A', %dil
	jl	__DD1
	cmpb	$'Z', %dil
	jg	__DD1
	xor	%rax, %rax
	movb	%dil, %al
	orb	$0x20, %al

__DD1: 	
	ret		
