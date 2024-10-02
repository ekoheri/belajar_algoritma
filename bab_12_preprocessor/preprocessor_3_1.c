// Simpan dengan nama file preprocessort_3_1.c
#include <stdio.h>
#include "preprocessor_define.h"

int mulai() 
awal
    angka_bulat umur;
    pecahan tinggi;
    karakter nama[50];
    karakter satu_karakter;

    cetak("Masukkan nama Anda: ");
    ambil_string_aman(nama, 50, stdin);

    cetak("Masukkan umur Anda: ");
    masukkan("%d", &umur);

    cetak("Masukkan tinggi Anda (dalam cm): ");
    masukkan("%f", &tinggi);

    cetak("Nama Anda adalah %s", nama);
    cetak("Umur Anda adalah %d tahun\n", umur);
    cetak("Tinggi Anda adalah %.2f cm.\n", tinggi);

    cetak("Tekan satu karakter untuk melanjutkan: ");
    satu_karakter = ambil_karakter();
    ambil_karakter();

    kembalikan 0;
akhir
