
	global   main
	extern    printf
main:

hello_string: db 'Hello, Holberton\n', 0

mov esi, hello_string
xor ebx, ebx
call printf
mov eax, 0
ret

