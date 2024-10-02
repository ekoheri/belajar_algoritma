;Simpan dengan nama file perulangan_2_3.asm
section .data
    kata db " Bismillahirrahmanirrahim", 0x0A
    ;panjang karakter kata 26 byte
    pesan db "Berhenti?(Y/N)" 
    ;panjang karakter pesan 14 byte
segment .bss
    nomor resb 1
    tekan_tombol resb 2
section .text
    global _start
_start:
    ;inisiasi perulangan
    mov eax, 0x31 ; ASCII angka 1
    mov [nomor], eax 

    ;blok perulangan
ulangi:
    ;blok tampilkan nomor 
    mov ecx, nomor
    mov edx, 0x01
    mov ebx, 0x01
    mov eax, 0x04
    int 0x80

    ;blok tampilkan kata
    mov ecx, kata 
    mov edx, 26
    mov ebx, 0x01
    mov eax, 0x04
    int 0x80

    ;blok operasi penambahan nomor
    mov eax, [nomor]
    sub eax, 0x30  ; konversi dari ASCII ke angka decimal.
    add eax, 0x01  ; tambahkan eax dengan decimal 1
    add eax, 0x30  ; konversi dari decimal ke ASCII
    mov [nomor], eax ; pindahkan eax ke memory

    ;blok tampilkan pesan
    mov ecx, pesan 
    mov edx, 14
    mov ebx, 0x01
    mov eax, 0x04
    int 0x80

    ;blok input tombol keyboard Y/N 
    mov ecx, tekan_tombol 
    mov edx, 0x02
    mov ebx, 0x02
    mov eax, 0x03
    int 0x80

    ;blok compare (membandingkan) tombol yg ditekan dengan huruf Y
    mov al, [tekan_tombol]
    cmp al, 0x59 ; 59hexa decimal adalah ASCII huruf Y
    je stop     ; jika al sama dengan Y maka loncat (jump) ke blok stop
    loop ulangi ; jika al tidak sama dgn Y maka loncat ke blok ulangi 
stop: 
    mov eax, 0x01
    mov ebx, 0x00
    int 0x80