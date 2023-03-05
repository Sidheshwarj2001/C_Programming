	.file	"preprocessDemo.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC3:
	.ascii "Area is : %f\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	fldz
	fstps	28(%esp)
	flds	LC1
	fstps	24(%esp)
	flds	24(%esp)
	fldl	LC2
	fmulp	%st, %st(1)
	flds	24(%esp)
	fmulp	%st, %st(1)
	fstps	28(%esp)
	flds	28(%esp)
	fstpl	4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.section .rdata,"dr"
	.align 4
LC1:
	.long	1091567616
	.align 8
LC2:
	.long	1374389535
	.long	1074339512
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
