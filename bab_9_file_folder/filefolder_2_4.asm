section .data
    filename db 'Foldernya_Eko/test.txt', 0   ; Nama file
    buffer db 100               ; Buffer untuk membaca file
    buffer_len equ $ - buffer   ; Panjang buffer

section .bss
    filehandle resd 1          ; Handle file

section .text
    global _start

_start:
    ; Buka file untuk dibaca
    mov eax, 5              ; Syscall number untuk open()
    mov ebx, filename       ; Nama file
    mov ecx, 0              ; Flag: O_RDONLY
    int 0x80                ; Panggil kernel

    ; Simpan handle file
    mov [filehandle], eax

read_loop:
    ; Baca isi file ke dalam buffer
    mov eax, 3              ; Syscall number untuk read()
    mov ebx, [filehandle]   ; File descriptor
    mov ecx, buffer         ; Alamat buffer
    mov edx, buffer_len     ; Panjang buffer
    int 0x80                ; Panggil kernel

    ; Periksa apakah sudah mencapai akhir file
    cmp eax, 0              ; Jika tidak ada data yang dibaca, berarti sudah mencapai akhir file
    je close_file

    ; Cetak isi file
    mov eax, 4              ; Syscall number untuk write()
    mov ebx, 1              ; File descriptor untuk stdout
    mov ecx, buffer         ; Pointer ke buffer
    int 0x80                ; Panggil kernel

    ; Ulangi pembacaan sampai akhir file
    jmp read_loop

close_file:
    ; Tutup file
    mov eax, 6              ; Syscall number untuk close()
    mov ebx, [filehandle]   ; File descriptor
    int 0x80                ; Panggil kernel

    ; Exit program
    mov eax, 1              ; Syscall number untuk exit()
    xor ebx, ebx            ; Exit code 0
    int 0x80                ; Panggil kernel
