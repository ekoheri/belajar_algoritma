global _start
section .data
    pesan db "-Halo", 0x0A
segment .bss
    nomor resb 1 
section .text
    _start:
        ;block inisialisasi nomor
        mov eax, 00110001b
        mov [nomor], eax
        
        ;blok tampilkan nomor
        mov ecx, nomor
        mov edx, 1
        mov ebx, 1
        mov eax, 4
        int 0x80

        ;blok tampilkan pesan
        mov ecx, pesan
        mov edx, 6
        mov ebx, 1
        mov eax, 4
        int 0x80

        ;blok operasi penambahan nomor
        mov eax, [nomor]
        sub eax, 00110000b
        add eax, 00000001b
        add eax, 00110000b
        mov [nomor], eax

        ;blok tampilkan nomor 1
        mov ecx, nomor
        mov edx, 1
        mov ebx, 1
        mov eax, 4
        int 0x80

        ;blok tampilkan pesan
        mov ecx, pesan
        mov edx, 6
        mov ebx, 1
        mov eax, 4
        int 0x80

        ;blok exit system
        mov eax, 1
        mov ebx, 0
        int 0x80