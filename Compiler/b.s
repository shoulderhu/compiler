.file	"/home/ubuntu/Desktop/b.c"
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
	movl	$0, %eax
	movl	%eax, -4(%ebp)
	movl	$0, %eax
	movl	%eax, -4(%ebp)
.L0:
	movl	-4(%ebp), %eax
	cmpl	$10, %eax
	setl	%al
	movzbl	%al, %eax
	testl	%eax, %eax
	jnz	.L1
	jmp	.L2
.L1:
	movl	$.LC0, %eax
	pushl	%eax
	call	printf
	addl	$4, %esp
.L3:
	movl	-4(%ebp), %eax
	addl	$1, %eax
	movl	%eax, -4(%ebp)
	jmp	.L0
.L2:
.L4:
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	main,.-main
