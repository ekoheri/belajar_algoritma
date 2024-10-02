;Simpan dengan nama file array_1.asm
global _start
section .data
    array dd 1, 2, 3  
    ; Array dengan 3 elemen integer
section .bss
    buffer resb 1      
section .text
_start:
    ; Menampilkan elemen pertama
    mov eax, [array]
    add eax, '0'
    mov byte [buffer], al

    mov eax, 4
    mov ebx, 1
    mov ecx, buffer
    mov edx, 1
    int 0x80

    ; Menampilkan elemen kedua
    mov eax, [array + 4]
    add eax, '0'
    mov byte [buffer], al

    mov eax, 4
    mov ebx, 1
    mov ecx, buffer
    mov edx, 1
    int 0x80

    ; Menampilkan elemen ketiga
    mov eax, [array + 8]
    add eax, '0'
    mov byte [buffer], al

    mov eax, 4
    mov ebx, 1
    mov ecx, buffer
    mov edx, 1
    int 0x80

    ; Exit program
    mov eax, 1
    xor ebx, ebx
    int 0x80
