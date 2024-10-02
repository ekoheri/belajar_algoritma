global _start
section .data
    foldername db 'Foldernya_Eko', 0   ; Nama folder yang akan dibuat
section .text
    _start:
        ; Panggil syscall untuk membuat folder
        mov eax, 39
        mov ebx, foldername
        mov ecx, 0777o
        int 0x80

        ; Keluar dari program
        mov eax, 1
        xor ebx, ebx
        int 0x80
