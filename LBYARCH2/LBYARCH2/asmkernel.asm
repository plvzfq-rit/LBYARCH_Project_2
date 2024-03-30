section .data
    holder dd 0.0
    qholder dq 0.0
    print_double db "Y[%d] = %lf", 10, 0
    header db "Y array contents:", 10, 0

section .text
bits 64
extern printf
default rel

global asmkernel
asmkernel:
    xor rax, rax
    movss xmm1, [holder]
L1:
    movss xmm2, [rdx + rax * 4]
    addss xmm1, xmm2
    inc rax
    cmp rax, 7
    jge EL1
    jmp L1
EL1:
    movss dword [r8], xmm1
L2:
    movss xmm2, [rdx + rax * 4]
    addss xmm1, xmm2
    sub rax, 7
    movss xmm2, [rdx + rax * 4]
    subss xmm1, xmm2
    inc rax
    movss dword [r8 + rax * 4], xmm1
    add rax, 7
    cmp rax, rcx
    jge EL2
    jmp L2
EL2:
    mov r12, rcx
    sub r12, 6
    cmp r12, 10
    jg L20
EL2B:
    ;xor r13, r13
    ;mov r14, r8
    ;sub rsp, 8 * 5
    ;lea rcx, [header]
    ;call printf
    ;add rsp, 8 * 5
;L3:
    ;movss xmm1, [r14 + r13 * 4]
    ;cvtss2sd xmm2, xmm1
    ;movsd [qholder], xmm2
    ;sub rsp, 8 * 5
    ;lea rcx, [print_double]
    ;mov rdx, r13
    ;mov r8, [qholder]
    ;call printf
    ;add rsp, 8 * 5
    ;inc r13
    ;cmp r13, r12
    ;jge EL3
    ;jmp L3
;EL3:
    xor rax, rax
    ret

L20:
    mov r12, 10
    jmp EL2B