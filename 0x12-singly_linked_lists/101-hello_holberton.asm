section .data
msg: db "Hello, Holberton", 0
fmt: db "%s," 10, 0

section .text
extern printf

global main
main:
sub rsp, 8                     ; Align the stack

mov rdi, fwt                  ; set the address of the hello string
mov rsi, msg                  ; set the address of the hello string
xor rax, rax                   ; clear eax register
call printf                    ; call printf function

add rsp, 8                    ; restore the stack
mov rax, 0x60                  ; exit system call number
xor edi, edi                   ; exit status 0
syscall                        ; invoke the system call

section .bss
