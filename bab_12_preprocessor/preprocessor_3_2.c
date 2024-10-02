//Simpan dengan nama file preprocessor_3_2.c
#include <stdio.h>
#include "preprocessor_define.h"

int mulai() 
awal
    angka_bulat umur;
    cetak ("Masukkan umur anda : ");
    masukkan("%d", &umur);

    jika (umur >= 0 dan umur <= 5) 
    awal
        cetak("Anda masih balita.\n");
    akhir 
        lalu jika (umur >= 6 dan umur <= 12) 
        awal
            cetak("Anda masih anak-anak.\n");
        akhir 
            lalu jika (umur >= 13 dan umur <= 16) 
            awal
                    cetak("Anda masih remaja.\n");
            akhir 
                lalu jika (umur >= 17 dan umur <= 59) 
                awal
                    cetak("Anda sudah dewasa.\n");
                akhir 
                    lalu jika (umur >= 60) awal
                        cetak("Anda sudah tua.\n");
                akhir

    kembalikan 0;
akhir
