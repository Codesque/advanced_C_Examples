	.file	"main.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "%d\0"
	.text
	.def	local_function.3222;	.scl	3;	.type	32;	.endef
	.seh_proc	local_function.3222
local_function.3222:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	movq	%r10, -24(%rbp)
	movl	$2, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	nop
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	usageOfAuto
	.def	usageOfAuto;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfAuto
usageOfAuto:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	leaq	16(%rbp), %rax
	movq	%rax, -16(%rbp)
	movl	$1, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	leaq	-16(%rbp), %rax
	movq	%rax, %r10
	call	local_function.3222
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	usageOfEnum
	.def	usageOfEnum;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfEnum
usageOfEnum:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	$2, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	usageOfExtern
	.def	usageOfExtern;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfExtern
usageOfExtern:
	.seh_endprologue
	movl	$3, externVariable(%rip)
	nop
	ret
	.seh_endproc
	.globl	usageOfRegister
	.def	usageOfRegister;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfRegister
usageOfRegister:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	$10, -84(%rbp)
	leaq	-84(%rbp), %rbx
	movl	(%rbx), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	nop
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC2:
	.ascii "Amounth of memory that is allocated to INTEGER datatype is %lu\12\0"
	.align 8
.LC3:
	.ascii "Amounth of memory that is allocated to FLOAT datatype is %lu\12\0"
	.align 8
.LC4:
	.ascii "Amounth of memory that is allocated to DOUBLE datatype is %lu\12\0"
	.align 8
.LC5:
	.ascii "Amounth of memory that is allocated to the (10(int) + 5.21(double)) expression is %lu\12\0"
	.align 8
.LC6:
	.ascii "The length of array that contains all digits is %lu\12\0"
	.text
	.globl	usageOfsizeof
	.def	usageOfsizeof;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfsizeof
usageOfsizeof:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$96, %rsp
	.seh_stackalloc	96
	.seh_endprologue
	movl	$10, -4(%rbp)
	movsd	.LC1(%rip), %xmm0
	movsd	%xmm0, -16(%rbp)
	movl	$1, -64(%rbp)
	movl	$2, -60(%rbp)
	movl	$3, -56(%rbp)
	movl	$4, -52(%rbp)
	movl	$5, -48(%rbp)
	movl	$6, -44(%rbp)
	movl	$7, -40(%rbp)
	movl	$8, -36(%rbp)
	movl	$9, -32(%rbp)
	movl	$0, -28(%rbp)
	movl	$4, %edx
	leaq	.LC2(%rip), %rcx
	call	printf
	movl	$4, %edx
	leaq	.LC3(%rip), %rcx
	call	printf
	movl	$8, %edx
	leaq	.LC4(%rip), %rcx
	call	printf
	movl	$8, %edx
	leaq	.LC5(%rip), %rcx
	call	printf
	movl	$10, %edx
	leaq	.LC6(%rip), %rcx
	call	printf
	nop
	addq	$96, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC7:
	.ascii "AdamBerg\0"
.LC8:
	.ascii "Married\0"
.LC9:
	.ascii "Adam\0"
.LC10:
	.ascii "%d , %s , %s \12\0"
	.text
	.globl	usageOfStructure0
	.def	usageOfStructure0;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfStructure0
usageOfStructure0:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$96, %rsp
	.seh_stackalloc	96
	.seh_endprologue
	movl	$21, -64(%rbp)
	leaq	.LC7(%rip), %rax
	movq	%rax, -56(%rbp)
	leaq	.LC8(%rip), %rax
	movq	%rax, -48(%rbp)
	movl	$10, -32(%rbp)
	leaq	.LC9(%rip), %rax
	movq	%rax, -24(%rbp)
	leaq	.LC8(%rip), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rcx
	movq	-24(%rbp), %rdx
	movl	-32(%rbp), %eax
	movq	%rcx, %r9
	movq	%rdx, %r8
	movl	%eax, %edx
	leaq	.LC10(%rip), %rcx
	call	printf
	nop
	addq	$96, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC11:
	.ascii "Lamborgini\0"
	.align 8
.LC12:
	.ascii "%s : production_year = %d , price = %d \12\12\0"
	.text
	.globl	usageOfStructure1
	.def	usageOfStructure1;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfStructure1
usageOfStructure1:
	pushq	%rbp
	.seh_pushreg	%rbp
	subq	$848, %rsp
	.seh_stackalloc	848
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	$0, 716(%rbp)
	jmp	.L11
.L12:
	movl	716(%rbp), %eax
	cltq
	salq	$4, %rax
	leaq	720(%rbp), %rcx
	addq	%rcx, %rax
	subq	$816, %rax
	leaq	.LC11(%rip), %rdx
	movq	%rdx, (%rax)
	movl	716(%rbp), %eax
	cltq
	salq	$4, %rax
	leaq	720(%rbp), %rdx
	addq	%rdx, %rax
	subq	$808, %rax
	movl	$2022, (%rax)
	movl	716(%rbp), %eax
	cltq
	salq	$4, %rax
	leaq	720(%rbp), %rcx
	addq	%rcx, %rax
	subq	$804, %rax
	movl	$1000000, (%rax)
	movl	716(%rbp), %eax
	cltq
	salq	$4, %rax
	leaq	720(%rbp), %rdx
	addq	%rdx, %rax
	subq	$804, %rax
	movl	(%rax), %ecx
	movl	716(%rbp), %eax
	cltq
	salq	$4, %rax
	leaq	720(%rbp), %rdx
	addq	%rdx, %rax
	subq	$808, %rax
	movl	(%rax), %edx
	movl	716(%rbp), %eax
	cltq
	salq	$4, %rax
	leaq	720(%rbp), %r10
	addq	%r10, %rax
	subq	$816, %rax
	movq	(%rax), %rax
	movl	%ecx, %r9d
	movl	%edx, %r8d
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	printf
	addl	$1, 716(%rbp)
.L11:
	cmpl	$49, 716(%rbp)
	jle	.L12
	nop
	addq	$848, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC13:
	.ascii "%s : %d  , %d\0"
	.text
	.globl	usageOfStructure2
	.def	usageOfStructure2;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfStructure2
usageOfStructure2:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	movl	$21, -32(%rbp)
	movl	$2025, -28(%rbp)
	leaq	.LC8(%rip), %rax
	movq	%rax, -24(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	4(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	%ecx, %r9d
	movl	%edx, %r8d
	movq	%rax, %rdx
	leaq	.LC13(%rip), %rcx
	call	printf
	nop
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC14:
	.ascii "Berg\0"
.LC15:
	.ascii "Working\0"
.LC16:
	.ascii "Computer Engineering\0"
.LC17:
	.ascii "arr[%d][%d] = %d\12\0"
	.text
	.globl	usageOfTypedef
	.def	usageOfTypedef;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfTypedef
usageOfTypedef:
	pushq	%rbp
	.seh_pushreg	%rbp
	subq	$880, %rsp
	.seh_stackalloc	880
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	$10, 740(%rbp)
	leaq	.LC14(%rip), %rax
	movq	%rax, 704(%rbp)
	leaq	.LC15(%rip), %rax
	movq	%rax, 712(%rbp)
	leaq	.LC16(%rip), %rax
	movq	%rax, 720(%rbp)
	movl	$21, 728(%rbp)
	movl	$0, 748(%rbp)
	jmp	.L15
.L18:
	movl	$0, 744(%rbp)
	jmp	.L16
.L17:
	movl	748(%rbp), %edx
	movl	744(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	744(%rbp), %eax
	movslq	%eax, %r8
	movl	748(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%r8, %rax
	movl	%ecx, -96(%rbp,%rax,4)
	movl	748(%rbp), %edx
	movl	744(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	744(%rbp), %edx
	movl	748(%rbp), %eax
	movl	%ecx, %r9d
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC17(%rip), %rcx
	call	printf
	addl	$1, 744(%rbp)
.L16:
	cmpl	$19, 744(%rbp)
	jle	.L17
	addl	$1, 748(%rbp)
.L15:
	cmpl	$9, 748(%rbp)
	jle	.L18
	nop
	addq	$880, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC18:
	.ascii "When x = 3 : x:%d \11 y:%d\12\0"
.LC19:
	.ascii "When y = 101 : x:%d \11 y:%d\12\0"
	.text
	.globl	usageOfUnion
	.def	usageOfUnion;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfUnion
usageOfUnion:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	$404, -4(%rbp)
	movl	$3, -4(%rbp)
	movl	-4(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC18(%rip), %rcx
	call	printf
	movl	$101, -4(%rbp)
	movl	-4(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC19(%rip), %rcx
	call	printf
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC20:
	.ascii "Initialised value of the non-volatile constant 'local' %d\12\0"
	.align 8
.LC21:
	.ascii "Modified value of the non-volatile constant 'local' %d\12\0"
	.align 8
.LC22:
	.ascii "Initialised value of the volatile constant 'volatileLocal' %d\12\0"
	.align 8
.LC23:
	.ascii "Modified value of the volatile constant 'volatileLocal' %d\12\0"
	.text
	.globl	usageOfVotile
	.def	usageOfVotile;	.scl	2;	.type	32;	.endef
	.seh_proc	usageOfVotile
usageOfVotile:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	movl	$10, -20(%rbp)
	leaq	-20(%rbp), %rax
	movq	%rax, -8(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC20(%rip), %rcx
	call	printf
	movq	-8(%rbp), %rax
	movl	$100, (%rax)
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC21(%rip), %rcx
	call	printf
	movl	$10, -24(%rbp)
	leaq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC22(%rip), %rcx
	call	printf
	movq	-16(%rbp), %rax
	movl	$100, (%rax)
	movl	-24(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC23(%rip), %rcx
	call	printf
	nop
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	externVariable
	.data
	.align 4
externVariable:
	.long	10
	.text
	.globl	keywords
	.def	keywords;	.scl	2;	.type	32;	.endef
	.seh_proc	keywords
keywords:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	usageOfVotile
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	call	keywords
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC1:
	.long	1030792151
	.long	1075107594
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
