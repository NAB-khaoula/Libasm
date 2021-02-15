
global	_ft_strcpy

section .text

_ft_strcpy:	mov rax, 0

loop:		cmp BYTE [rsi + rax], 0
			je	exit
			mov	dl, BYTE [rsi + rax]
			mov	BYTE [rdi + rax], dl
			inc	rax
			jmp	loop


exit:		mov	dl, BYTE [rsi + rax]
			mov	BYTE [rdi + rax], dl
			mov rax, rdi
			ret
			