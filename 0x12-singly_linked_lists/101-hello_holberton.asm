extern printf
global main

section .text
main:
push rbp
mov rdi,msg
mov rax,0
call printf

pop rbp
mov rax,0
ret

section .data
msg : db "Hello, Holberton", 10, 0
