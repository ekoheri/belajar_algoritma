;Simpan dengan nama file percabangan_1_1.asm
global _start
section .data
    pesan_benar db "Angka 1 > Angka 2", 10
    pesan_salah db "Angka 1 < Angka 2", 10
segment .bss
    angka1 resb 2
    angka2 resb 2
section .text
    _start:
        ;blok input angka1
        mov ecx, angka1
        mov edx, 2 ; 2 byte
        mov ebx, 2
        mov eax, 3
        int 128

        ;blok input angka 2
        mov ecx, angka2
        mov edx, 2
        mov ebx, 2
        mov eax, 3
        int 128

        ;blok membandingkan (compare)
        mov al, [angka1]
        mov ah, [angka2]
        cmp al, ah

        ;blok decision making
        jg benar
        jmp salah
        benar:
            mov ecx, pesan_benar 
            mov edx, 18
            mov ebx, 1
            mov eax, 4
            int 128
            jmp stop
        salah:
            mov ecx, pesan_salah 
            mov edx, 18
            mov ebx, 1
            mov eax, 4
            int 128
            jmp stop
        stop:
            mov eax, 1
            mov ebx, 0
            int 128