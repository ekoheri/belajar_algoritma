section .data
    dec_num dd 25       ; Angka desimal yang akan dikonversi
    bin_num times 32 db 0  ; Array untuk menyimpan angka biner hasil konversi

section .bss

section .text
    global _start

_start:
    mov eax, [dec_num]   ; Memuat angka desimal ke dalam register eax
    mov ebx, 2           ; Basis biner
    mov ecx, bin_num     ; Menyiapkan pointer untuk menyimpan angka biner
    call decToBinary     ; Memanggil prosedur konversi

    ; Print hasil konversi
    mov edx, 32          ; Panjang maksimal angka biner
    mov eax, 4           ; Sistem panggilan write
    mov ebx, 1           ; File descriptor (stdout)
    mov ecx, bin_num     ; Alamat awal string
    int 0x80             ; Panggil sistem

    ; Exit program
    mov eax, 1           ; Sistem panggilan exit
    xor ebx, ebx         ; Kode keluar
    int 0x80             ; Panggil sistem

; Prosedur untuk mengkonversi angka desimal ke biner
decToBinary:
    mov esi, ecx         ; Menyimpan alamat awal bin_num
    add ecx, 31          ; Menyimpan alamat akhir bin_num
.loop:
    test eax, eax        ; Periksa apakah nilai sudah nol
    jz .done             ; Jika ya, selesai
    mov edx, 0           ; Bersihkan edx
    div ebx              ; Bagi nilai dengan basis (2)
    add dl, '0'          ; Tambahkan karakter '0' ke dalam hasil (untuk biner)
    dec ecx              ; Pindahkan pointer ke elemen sebelumnya
    mov [ecx], dl        ; Simpan sisa bagi (digit biner) ke dalam array
    jmp .loop
.done:
    mov edx, 32          ; Menyimpan panjang maksimal angka biner
    sub edx, ecx         ; Menghitung panjang sebenarnya
    mov esi, bin_num     ; Pointer awal string
    mov edi, esi         ; Pointer akhir string
    add edi, edx         ; Pointer akhir = Pointer awal + panjang
.reverse_loop:
    cmp esi, edi         ; Jika pointer awal lebih besar atau sama dengan pointer akhir
    jge .reverse_done    ; Maka proses balik selesai
    mov al, [esi]        ; Tukar elemen awal dan akhir
    mov ah, [edi]
    mov [esi], ah
    mov [edi], al
    inc esi              ; Pindahkan pointer awal maju
    dec edi              ; Pindahkan pointer akhir mundur
    jmp .reverse_loop
.reverse_done:
    ret
