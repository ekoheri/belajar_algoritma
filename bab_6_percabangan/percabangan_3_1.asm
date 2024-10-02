;Simpan dengan nama file percabangan_3_1.asm
global _start
section .data
    hari_ahad db "Ahad", 10
    hari_senin db "Senin", 10
    hari_selasa db "Selasa", 10
    hari_rabu db "Rabu", 10
    hari_kamis db "Kamis", 10
    hari_jumat db "Jumat", 10
    hari_sabtu db "Sabtu", 10

section .bss
    angka resb 2

section .text
    _start:
        ;blok input angka1
        mov ecx, angka
        mov edx, 2 ; 2 byte
        mov ebx, 0 ; File descriptor untuk stdin
        mov eax, 3 ; Sistem panggilan untuk membaca
        int 80h
        jmp angka_1

        ;blok membandingkan (compare)
        angka_1:
            movzx eax, byte [angka] ; Memuat angka sebagai byte tunggal
            cmp eax, '1'

            ;blok decision making
            je print_ahad
            jmp angka_2

        print_ahad:
            mov ecx, hari_ahad 
            mov edx, 5
            mov ebx, 1
            mov eax, 4
            int 80h
            jmp stop

        angka_2:
            cmp eax, '2'
            je print_senin
            jmp angka_3

        print_senin:
            mov ecx, hari_senin
            mov edx, 6
            mov ebx, 1
            mov eax, 4
            int 80h
            jmp stop

        angka_3:
            cmp eax, '3'
            je print_selasa
            jmp angka_4

        print_selasa:
            mov ecx, hari_selasa
            mov edx, 7
            mov ebx, 1
            mov eax, 4
            int 80h
            jmp stop

        angka_4:
            cmp eax, '4'
            je print_rabu
            jmp angka_5

        print_rabu:
            mov ecx, hari_rabu
            mov edx, 5
            mov ebx, 1
            mov eax, 4
            int 80h
            jmp stop

        angka_5:
            cmp eax, '5'
            je print_kamis
            jmp angka_6

        print_kamis:
            mov ecx, hari_kamis
            mov edx, 6
            mov ebx, 1
            mov eax, 4
            int 80h
            jmp stop

        angka_6:
            cmp eax, '6'
            je print_jumat
            jmp angka_7

        print_jumat:
            mov ecx, hari_jumat
            mov edx, 6
            mov ebx, 1
            mov eax, 4
            int 80h
            jmp stop

        angka_7:
            cmp eax, '7'
            je print_sabtu
            ; Tidak perlu cek hari lain karena tidak ada lebih dari 7 hari dalam seminggu
            jmp stop

        print_sabtu:
            mov ecx, hari_sabtu
            mov edx, 6
            mov ebx, 1
            mov eax, 4
            int 80h
            jmp stop

    stop:
        mov eax, 1
        mov ebx, 0
        int 80h