global _start

section .data
    hasil dd 0
    pesan_genap db "Genap", 10
    pesan_ganjil db "Ganjil", 10

segment .bss
    angka resd 1

section .text
    _start:
        ; Memuat input dari pengguna
        mov ecx, angka
        mov edx, 2
        mov ebx, 2
        mov eax, 3
        int 0x80

        ; Memuat nilai dividend dan divisor ke dalam register
        mov eax, dword [angka]
        sub eax, 00110000b
        mov ebx, 00000010b

        xor edx, edx
        div ebx
        mov [hasil], edx

        mov eax, [hasil]
        test eax, 00000001b
        jz genap

        ganjil:
            mov ecx, pesan_ganjil
            mov edx, 7
            mov ebx, 1
            mov eax, 4
            int 0x80
            jmp berhenti

        genap:
            mov ecx, pesan_genap
            mov edx, 6
            mov ebx, 1
            mov eax, 4
            int 0x80
            jmp berhenti

        ; Keluar dari program
        berhenti:
            mov eax, 1
            xor ebx, ebx
            int 0x80
