
section	.text

	global		_ft_strdup
	extern		_ft_strlen
	extern		_ft_strcpy
	extern		_malloc
	extern		_ft_write

_ft_strdup:
			
			call	_ft_strlen
			add		rax, 1
			push 	rdi
			mov		rdi, rax
			call	_malloc
			mov		rdi, rax
			pop		rsi
			;mov		rax, rsi
			call	_ft_strcpy
			ret
