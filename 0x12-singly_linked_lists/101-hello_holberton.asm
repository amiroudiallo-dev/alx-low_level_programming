section .data
    hello db 'Hello, Holberton', 0
    newline db 10               ; ASCII code for newline

section .text
    global main
    extern printf

main:
    sub rsp, 8                  ; Align the stack
    mov rdi, hello              ; Format string
    call printf                 ; Call printf
    mov rdi, newline            ; Format string for newline
    call printf                 ; Call printf for newline
    add rsp, 8                  ; Restore the stack
    mov eax, 0                  ; Return 0
    ret

