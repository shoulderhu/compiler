.file	"hello.c"
	.section	.rodata
.LC0:
	.string	"hello world"
	.text
.globl main
	.type	main,@function
main:
	pushl	%ebp
	movl	%esp, %ebp
	movl	$.LC0, %eax
	pushl	%eax
	call	printf
	addl	$4, %esp
.L0:
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	main,.-main
