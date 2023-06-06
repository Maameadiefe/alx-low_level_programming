section .data
    msg db "Hello, Holberton", 0
    fmt db "%s,", 10, 0

section .text
    extern printf

global main
main:
    sub rsp, 8                     ; Align the stack

    mov rdi, fmt                  ; Set the address of the format string
    mov rsi, msg                  ; Set the address of the hello string
    xor rax, rax                  ; Clear the rax register
    call printf                   ; Call the printf function

    add rsp, 8                    ; Restore the stack
    mov eax, 60                   ; Exit system call number
    xor edi, edi                  ; Exit status 0
    syscall                       ; Invoke the system call

section .bss
    ; Declare variables or uninitialized data here if needed

