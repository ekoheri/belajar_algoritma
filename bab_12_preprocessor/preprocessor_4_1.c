//Simpan dengan nama file preprocessor_4_1.c
#include <stdio.h>
#include "preprocessor_define.h"

//Fungsi Sequential Search/Linear Search
angka_bulat sequential(angka_bulat data[], angka_bulat ukuran, angka_bulat dicari)
awal
    angka_bulat i;
    untuk (i = 0; i < ukuran; i++)
    awal
        jika (data[i] setara dicari)
        awal
            kembalikan i;
        akhir
    akhir
    kembalikan -1;
akhir

angka_bulat mulai()
awal
    angka_bulat data[] = {1, 3, 5, 4, 12, 6, 8, 7, 9};
    angka_bulat ukuran = sizeof(data) / sizeof(data[0]);
    angka_bulat target;
    angka_bulat hasil;

    cetak("Masukkan nilai yang akan dicari: ");
    masukkan("%d", &target);

    hasil = sequential(data, ukuran, target);

    jika (hasil tidak_setara -1)
        cetak("Nilai %d ditemukan pada indeks %d.\n", target, hasil);
    lalu 
        cetak("Nilai %d tidak ditemukan.\n", target);
    
    kembalikan 0;
akhir
