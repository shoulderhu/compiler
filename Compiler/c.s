.file	"/home/ubuntu/Desktop/c.c"
	.section	.rodata
.LC0:
	.string	"a"
.LC1:
	.string	"b"
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
	movl	$0, %ecx
	cmpl	%ecx, %eax
	je	.L0
	movl	$1, %ecx
	cmpl	%ecx, %eax
	je	.L1
	jmp	.L2
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
	jmp	.L2
.L2:
.L3:
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	main,.-main
