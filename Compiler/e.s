.file	"/home/ubuntu/Desktop/e.c"
	.section	.rodata
.LC0:
	.string	"1"
.LC1:
	.string	"0"
	.text
.globl main
	.type	main,@function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	$1, %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	cmpl	$1, %eax
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
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, -8(%ebp)
	jmp	.L2
.L1:
	movl	$.LC1, %eax
	pushl	%eax
	call	printf
	addl	$4, %esp
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, -8(%ebp)
	jmp	.L2
.L2:
.L3:
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	main,.-main
