global _start
section .data
        cr : db 10
    segment .bss
        angka1 resb 2
        angka2 resb 2
        hasil resb 2
section .text
    _start:
        ;block input angka 1
        mov ecx, angka1
        mov edx, 2
        mov ebx, 2
        mov eax, 3
        int 128

        ;block input angka 2
        mov ecx, angka2
        mov edx, 2
        mov ebx, 2
        mov eax, 3
        int 128

        ;block process
        mov al, [angka1]
        sub al, 00110000b
        mov bl, [angka2]
        sub bl, 00110000b

        div bl
        add al, 00110000b
        mov [hasil], al

        ;block output hasil 
        mov ecx, hasil 
        mov edx, 2 
        mov ebx, 1
        mov eax, 4
        int 128

        ;blok untuk menampilkan karakter enter atau carriage return (cr)
        mov ecx, cr
        mov edx, 1
        mov ebx, 1
        mov eax, 4
        int 128

        ;block system exit 
        mov eax, 1
        mov ebx, 0
        int 128   
