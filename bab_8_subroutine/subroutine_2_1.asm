; Simpan dengan nama file subroutine_2_1.asm
global _start
section .data
    msg1 db 'Inputkan nama : ', 0x0
    msg2 db 'Nama anda: ', 0x0
    input_buffer db 100 ; Buffer untuk menyimpan input dari pengguna

section .text
    _start:
        lea rdi, [msg1]
        call print_string

        ; membaca input dari keyboard
        lea rdi, [input_buffer]
        call scan_string

        lea rdi, [msg2]
        call print_string

        lea rdi, [input_buffer]
        call print_string

        mov eax, 60       ; system call untuk exit
        xor edi, edi      ; kode keluar 0
        syscall

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

        ; Ini adalah sub routine yg saya tambahkan
        scan_string:
            ; Mengatur panjang maksimum input
            mov rsi, input_buffer
            mov rdx, 100

            ; Menyiapkan sistem call untuk membaca input dari pengguna
            mov eax, 0        ; system call untuk read
            mov edi, 0        ; file descriptor 0 (stdin)
            syscall           ; panggil kernel untuk membaca input
            ; Menyimpan return value dari sistem call read (panjang input)
            mov rdi, rax
            ; Kembali dari subrutin
            ret