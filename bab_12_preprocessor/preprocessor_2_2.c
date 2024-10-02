//Simpan dengan nama file prepocessor_2_2.c
#include <stdio.h>

#define AWAL {
#define AKHIR }
#define cetak printf
#define masukan scanf
#define PI 3.14159

int main()
AWAL
    float jari_jari, luas;

    cetak("Masukkan jari-jari lingkaran: ");
    masukan("%f", &jari_jari);    luas = PI * jari_jari * jari_jari;
    cetak("Luas lingkaran & jari-jari %.2f adalah %.2f\n", jari_jari, luas);

    return 0;
AKHIR