section .text

global print_string
print_string:
    push rcx
    push rsi
    mov rsi, rdi
    .loop:
        mov al, byte [rsi]
        test al, al
        jz .done
        call print_char

        inc rsi
        jmp .loop
    .done:
        pop rsi
        pop rcx
        ret

print_char:
    mov eax, 1
    mov edi, 1
    mov edx, 1
    syscall
    ret

global scan_string
scan_string:
    mov rsi, rdi
    mov rdx, 100
    mov eax, 0
    mov edi, 0
    syscall
    mov rdi, rax
    ret

global exit_program
exit_program:
    mov eax, 60       ; system call untuk exit
    xor edi, edi      ; kode keluar 0
    syscall
    ret
