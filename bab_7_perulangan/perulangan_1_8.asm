section .data
    crlf : db 0x0D, 0x0A                 ; Enter

section .bss
    kata_asli resb 100
    kata_dibalik resb 100               ; Tempat untuk menyimpan string yang dibalik

section .text
    global _start

_start:
    ;Tambahkan program untuk input dari keyboard
    mov eax, 3                 ; syscall nomor 3 (sys_read)
    mov ebx, 2                 ; file descriptor 2 (stdin)
    mov ecx, kata_asli         ; alamat string CRLF
    mov edx, 100               ; panjang string
    int 0x80                   ; interrupt untuk menjalankan syscall

    xor ecx, ecx                        ; Inisialisasi ecx sebagai counter
    
    ; Hitung panjang string
panjang_kata:
    mov al, [kata_asli + ecx]           ; Ambil karakter dari str
    cmp al, 0                        ; Periksa null-terminator
    je mulai_dibalik                    ; Jika ditemukan null-terminator, keluar dari loop
    inc ecx                             ; Tambahkan 1 ke counter (panjang string)
    jmp panjang_kata

mulai_dibalik:
    mov ebx, ecx                        ; Simpan panjang string ke ebx
    dec ebx                             ; Set ebx ke indeks terakhir dari string
    xor edx, edx                        ; Inisialisasi edx sebagai counter untuk kata_dibalik

ulangi_balik_kata:
    mov al, [kata_asli + ebx]           ; Ambil karakter dari akhir string
    mov [kata_dibalik + edx], al        ; Simpan karakter ke kata_dibalik
    dec ebx                             ; Kurangi ebx untuk bergerak ke kiri pada str
    inc edx                             ; Tambahkan edx untuk bergerak ke kanan pada kata_dibalik
    cmp ebx, -1                         ; Periksa apakah ebx sudah di bawah 0
    jne ulangi_balik_kata               ; Ulangi hingga ebx habis

    ; Tampilkan string yang sudah dibalik

    mov eax, 4                 ; syscall nomor 4 (sys_write)
    mov ebx, 1                 ; file descriptor 1 (stdout)
    mov ecx, kata_dibalik      ; alamat string kata_dibalik
    mov edx, ecx               ; panjang string
    int 0x80                   ; interrupt untuk menjalankan syscall

    ; Tampilkan Enter (0x0D) + Baris Baru (0x0A)
    mov eax, 4                 ; syscall nomor 4 (sys_write)
    mov ebx, 1                 ; file descriptor 1 (stdout)
    mov ecx, crlf              ; alamat string CRLF
    mov edx, 2                 ; panjang string
    int 0x80                   ; interrupt untuk menjalankan syscall

    ; Keluar dari program

    mov eax, 1                 ; syscall nomor 1 (sys_exit)
    xor ebx, ebx               ; status 0
    int 0x80                   ; interrupt untuk menjalankan syscall
