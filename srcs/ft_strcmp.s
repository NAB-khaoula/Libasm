
global	_ft_strcmp

section	.text

_ft_strcmp:	mov rax, 0
			mov rdx, 0
			mov rcx, 0

loop:		cmp	BYTE [rdi + rax], 0
			je exit
			cmp	BYTE [rsi + rax], 0
			je exit
			mov	dl, BYTE [rdi + rax]
			mov cl, BYTE [rsi + rax]
			cmp	rdx, rcx
			jne exit
			inc rax
			jmp	loop

exit:	mov	dl, BYTE [rdi + rax]
		mov cl, BYTE [rsi + rax]
		sub	rdx, rcx
		mov rax, rdx
		ret