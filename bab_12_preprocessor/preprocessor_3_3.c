//Simpan dengan nama file preprocessor_3_3.c
#include <stdio.h>
#include "preprocessor_define.h"

angka_bulat mulai()
awal
    angka_bulat i;

    //Perulangan FOR
    cetak("Perulangan FOR\n");
    untuk (i = 0; i < 5; i++)
    awal
        printf("Nilai i: %d\n", i);
    akhir
    
    //Perulangan WHILE
    cetak("Perulangan WHILE\n");
    i = 1;
    selama (i < 5)
    awal
        printf("Nilai i: %d\n", i);
        i++;
    akhir

    //Perulangan DO-WHILE
    cetak("Perulangan DO-WHILE\n");
    i = 5;
    lakukan
    awal
        printf("Nilai i: %d\n", i);
        i--;
    akhir selama (i >= 0);

    kembalikan 0;
akhir