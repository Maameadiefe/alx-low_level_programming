section .data
    msg db "Hello, Holberton", 0
    fmt db "%s", 10, 0

section .text
    extern printf

global main
main:
    sub rsp, 8                     ; Align the stack

    mov rdi, fmt                  ; Set the address of the format string
    mov rsi, msg                  ; Set the address of the hello string
    xor eax, eax                  ; Clear the eax register
    call printf                   ; Call the printf function

    add rsp, 8                    ; Restore the stack
    xor edi, edi                  ; Clear the edi register for the exit status
    mov eax, 60                   ; Exit system call number
    syscall                       ; Invoke the system call

