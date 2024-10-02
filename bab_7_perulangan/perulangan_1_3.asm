global _start
section .data
    pesan db "Bismillahirrahmanirrahim", 0x0A 
    ; panjang karakter 25 byte
section .text
_start:
    ;blok inisialisasi perulangan
    mov rcx, 19       ; jumlah stack maksimal 19

    ;blok perulangan 
    ulangi:
        push rcx    ; membuat stack

        ;blok tampilkan pesan
        mov ecx, pesan
        mov edx, 25
        mov ebx, 0x01
        mov eax, 0x04
        int 0x80 

        pop rcx      ;ambil stack
    loop ulangi

    ;blok exit system
    mov eax, 0x01
    mov ebx, 0x00
    int 0x80
    