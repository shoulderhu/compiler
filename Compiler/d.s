.file	"/home/ubuntu/Desktop/d.c"
	.section	.rodata
.LC0:
	.string	"%d "
	.text
.globl main
	.type	main,@function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$4, %esp
	movl	$9, %eax
	movl	%eax, -4(%ebp)
.L0:
	movl	-4(%ebp), %eax
	pushl	%eax
	movl	$.LC0, %eax
	pushl	%eax
	call	printf
	addl	$8, %esp
.L1:
	movl	-4(%ebp), %eax
	subl	$1, %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	cmpl	$0, %eax
	setge	%al
	movzbl	%al, %eax
	testl	%eax, %eax
	jnz	.L0
	jmp	.L2
.L2:
.L3:
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	main,.-main
