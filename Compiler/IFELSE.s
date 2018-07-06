.file	"/home/ubuntu/Compiler/Example/IFELSE.c"
	.section	.rodata
.LC0:
	.string	"i is zero\n"
.LC1:
	.string	"i is not zero\n"
	.text
.globl main
	.type	main,@function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$4, %esp
	movl	$0, %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	cmpl	$0, %eax
	sete	%al
	movzbl	%al, %eax
	testl	%eax, %eax
	jnz	.L0
	jmp	.L1
.L0:
	movl	$.LC0, %eax
	pushl	%eax
	call	printf
	addl	$4, %esp
	jmp	.L2
.L1:
	movl	$.LC1, %eax
	pushl	%eax
	call	printf
	addl	$4, %esp
.L2:
.L3:
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	main,.-main
