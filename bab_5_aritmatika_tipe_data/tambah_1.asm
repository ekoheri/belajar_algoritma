; Simpan dengan nama file tambah_1.asm
section .data
        angka1 : db 00000100b ; simpan biner angka 4 ke variable angka1 di RAM
        angka2 : db 00000010b ; simpan biner angka 2 ke variable angka2 di RAM
        cr : db 10
    segment .bss
        hasil resb 1

section .text
    global _start
_start:
    ;blok proses
    mov eax, [angka1]   ; pindahkan isi (data) variable angka1 ke register eax
    mov ebx, [angka2]   ; pindahkan isi (data) variable angka2 ke register ebx
    add eax, ebx        ; tambahkan nilai eax dengan ebx
    add eax, 00110000b  ; tambahkan nilai eax dengan biner ASCII angka 0
    mov [hasil], eax    ; pindahkan nilai eax ke variable hasil di RAM

    ;blok untuk menampilkan data dari variable hasil
    mov ecx, hasil
    mov edx, 1
    mov ebx, 1
    mov eax, 4
    int 128

    ;blok untuk menampilkan karakter enter atau carriage return (cr)
    mov ecx, cr
    mov edx, 1
    mov ebx, 1
    mov eax, 4
    int 128

    ; blok reset nilai eax dan ebx
    mov ebx, 0
    mov eax, 1
    int 128