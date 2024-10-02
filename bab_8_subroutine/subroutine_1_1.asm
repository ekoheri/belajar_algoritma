global _start
section .data
    msg db 'Hello, World!', 0xA, 0x0
    pesan db 'Saya disini', 0xA, 0x0

section .text
    _start:
        ; Menyiapkan parameter untuk pemanggilan fungsi print_string
        lea rdi, [msg]  ; Memuat alamat string ke dalam rdi
        ; Memanggil fungsi print_string
        call print_string

        lea rdi, [pesan]  ; Memuat alamat string ke dalam rdi
        ; Memanggil fungsi print_string
        call print_string

        ; Keluar dari program
        mov eax, 60       ; system call untuk exit
        xor edi, edi      ; kode keluar 0
        syscall

    print_string:
        ; Menyimpan register yang perlu disimpan
        push rcx
        push rsi

        ; Mengatur pointer ke string
        mov rsi, rdi

        .loop:
            ; Memuat karakter ke AL dari memori yang ditunjuk oleh RSI
            mov al, byte [rsi]

            ; Jika karakter adalah null terminator, selesai
            test al, al
            jz .done

            ; Memanggil fungsi print_char untuk mencetak karakter
            call print_char

            ; Pindah ke karakter berikutnya
            inc rsi
            jmp .loop

        .done:
            ; Memulihkan register yang disimpan
            pop rsi
            pop rcx

            ; Kembali dari subrutin
            ret

        print_char:
            ; Mencetak karakter
            mov eax, 1        ; system call untuk write
            mov edi, 1        ; file descriptor 1 (stdout)
            mov edx, 1        ; panjang karakter (satu byte)
            syscall           ; panggil kernel
            ret
