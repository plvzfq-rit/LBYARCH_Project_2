%include "io64.inc"
section .data
    x_length dq 0
    i dq 0
    j dq 0
    x dq 0
    y dq 0
    holder dq 0.0
    min dq 0
    float_req db "%f", 0
    float_pri db "%lf", 10, 0
    
section .text
bits 64
default rel
global main
extern malloc, exit, scanf, printf
main:
    mov rbp, rsp; for correct debugging
    ;write your code here
    
    ; insert vector length
    PRINT_STRING "Insert vector length: "
    GET_UDEC 8, [x_length]
    
    mov rax, [x_length]
    mov rbx, 0x4
    mul rbx
    mov rdi, rax
    call malloc
    mov [x], rax
    
    mov rax, [x_length]
    sub rax, 6
    mov rbx, 0x4
    mul rbx
    mov rdi, rax
    call malloc
    mov[y], rax
    
    PRINT_STRING "Insert vector X contents:"
    NEWLINE
    mov rsi, [x]
    xor r8, r8
loop1:
    sub rsp, 8 * 5
    lea rcx, [float_req]
    lea rdx, [rsi]
    call scanf
    add rsp, 8 * 5
    inc r15
    cmp r15, [x_length]
    jge eloop1
    add rsi, 8
    jmp loop1

eloop1:
    xor r15, r15
    mov rsi, [x]
loop2:
    cvtss2sd xmm1, [rsi]
    movsd [holder], xmm1
    sub rsp, 8*5
    lea rcx, [float_pri]
    lea rdx, [holder]
    call printf
    add rsp, 8*5
    inc r15
    cmp r15, [x_length]
    jge eloop2
    add rsi, 8
    jmp loop2
eloop2:
    





;     ;movss xmm1, [rsi]
;     ;movss [holder], xmm1
;     sub rsp, 8 * 5
;     ;lea rcx, [float_req]
;     ;lea rdx, [holder]
;     mov rdi, [float_req]
;     movss xmm1, [rsi]
;     mov eax, 1
    
;     call printf
;     add rsp, 8 * 5
;     NEWLINE
;     inc r15
;     cmp r15, [x_length]
;     jge eloop2
;     add rsi, 8
;     jmp loop2
; eloop2:
    
    
    
    mov rdi, 0
    call exit