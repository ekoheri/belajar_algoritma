;Simpan dengan nama output_2.asm
section .data
    hello db 'Eko Heri Susanto', 10  ; Pesan yang akan dicetak
    len equ $ - hello             ; Panjang string

section .text
    global _start

_start:
    mov rdi, 1         ; File descriptor STDOUT (1)
    lea rsi, [hello]   ; Alamat string
    mov rdx, len       ; Panjang string
    mov rax, 1         ; Syscall write
    syscall            ; Panggil kernel

    mov rax, 60        ; Syscall exit
    xor rdi, rdi       ; Kode keluar 0
    syscall            ; Panggil kernel
