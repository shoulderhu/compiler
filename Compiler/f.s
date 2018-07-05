.file	"/home/ubuntu/Desktop/f.c"
	.section	.rodata
.LC0:
	.string	"%d "
	.text
.globl main
	.type	main,@function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	movl	$10, %eax
	movl	%eax, -4(%ebp)
.L0:
	movl	-4(%ebp), %eax
	movl	%eax, -8(%ebp)
	movl	-8(%ebp), %eax
	subl	$1, %eax
	movl	%eax, -4(%ebp)
	movl	-8(%ebp), %eax
	testl	%eax, %eax
	jnz	.L1
	jmp	.L2
.L1:
	movl	-4(%ebp), %eax
	pushl	%eax
	movl	$.LC0, %eax
	pushl	%eax
	call	printf
	addl	$8, %esp
	jmp	.L0
.L2:
.L3:
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	main,.-main
