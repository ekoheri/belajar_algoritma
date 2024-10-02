global _start

section .data
    huruf: db "Eko", 0Ah

section .text
    _start:
        mov ecx, huruf
        mov edx, 04h
        mov ebx, 01h
        mov eax, 04h 
        int 80h

        mov ebx, 00h
        mov eax, 01h
        int 80h