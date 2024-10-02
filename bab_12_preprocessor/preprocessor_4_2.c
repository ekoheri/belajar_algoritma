#include <stdio.h>
#include <string.h>
#include "preprocessor_define.h"

// Fungsi Sequential Search/Linear Search untuk string
angka_bulat sequential(karakter data[][20], angka_bulat ukuran, karakter dicari[])
awal
    angka_bulat i;
    untuk (i = 0; i < ukuran; i++)
    awal
        jika (strcmp(data[i], dicari) setara 0)
        awal
            kembalikan i;
        akhir
    akhir
    kembalikan -1;
akhir

angka_bulat mulai()
awal
    karakter data[][20] = {"apel", "jeruk", "pisang", "mangga", "anggur"};
    angka_bulat ukuran = sizeof(data) / sizeof(data[0]);
    karakter target[20];
    angka_bulat hasil;

    cetak("Masukkan string yang akan dicari: ");
    masukkan("%s", target);

    hasil = sequential(data, ukuran, target);

    jika (hasil tidak_setara -1)
        cetak("String '%s' ditemukan pada indeks %d.\n", target, hasil);
    lalu 
        cetak("String '%s' tidak ditemukan.\n", target);
    
    kembalikan 0;
akhir
