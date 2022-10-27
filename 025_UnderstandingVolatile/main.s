	.file	"main.c"
	.text
	.section .rdata,"dr"
.LC1:
	.ascii "%f\12\0"
	.text
	.p2align 4,,15
	.globl	not_optimized_execution
	.def	not_optimized_execution;	.scl	2;	.type	32;	.endef
	.seh_proc	not_optimized_execution
not_optimized_execution:
	subq	$56, %rsp
	.seh_stackalloc	56
	movaps	%xmm6, 32(%rsp)
	.seh_savexmm	%xmm6, 32
	.seh_endprologue
	movsd	.LC0(%rip), %xmm6
	leaq	.LC1(%rip), %rcx
	movapd	%xmm6, %xmm1
	movq	%xmm6, %rdx
	call	printf
	movapd	%xmm6, %xmm1
	movq	%xmm6, %rdx
	movaps	32(%rsp), %xmm6
	leaq	.LC1(%rip), %rcx
	addq	$56, %rsp
	jmp	printf
	.seh_endproc
	.p2align 4,,15
	.globl	optimized_execution
	.def	optimized_execution;	.scl	2;	.type	32;	.endef
	.seh_proc	optimized_execution
optimized_execution:
	subq	$56, %rsp
	.seh_stackalloc	56
	movaps	%xmm6, 32(%rsp)
	.seh_savexmm	%xmm6, 32
	.seh_endprologue
	movsd	.LC0(%rip), %xmm6
	leaq	.LC1(%rip), %rcx
	movapd	%xmm6, %xmm1
	movq	%xmm6, %rdx
	call	printf
	movapd	%xmm6, %xmm1
	movq	%xmm6, %rdx
	movaps	32(%rsp), %xmm6
	leaq	.LC1(%rip), %rcx
	addq	$56, %rsp
	jmp	printf
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section	.text.startup,"x"
	.p2align 4,,15
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	call	__main
	call	not_optimized_execution
	xorl	%eax, %eax
	addq	$40, %rsp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC0:
	.long	1610612736
	.long	1074339512
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
