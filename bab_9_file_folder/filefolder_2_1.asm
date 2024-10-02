global _start
section .data
    msg db 'Halo nama saya Eko Heri Susanto', 0xA
    len equ $ - msg
    filename db 'Foldernya_Eko/test.txt', 0
    lenfilename equ $ - filename
    file_descriptor dd 0

section .text
_start:
    ; Blok Membuka file
    mov eax, 5 
    mov ebx, filename
    mov ecx, 0x42      ; Flag: O_CREAT | O_WRONLY | O_TRUNC
    mov edx, 0666o
    int 0x80

    ; Simpan file descriptor
    mov [file_descriptor], eax

    ; Blok menulis file
    mov eax, 4
    mov ebx, [file_descriptor]
    mov ecx, msg
    mov edx, len
    int 0x80

    ; Blok menutup file
    mov eax, 6
    mov ebx, [file_descriptor]
    int 0x80

    ; Blok exit sistem
    mov eax, 1
    xor ebx, ebx
    int 0x80
