//Simpan dengan nama file perulangan_1_7.c
#include <stdio.h>

int main() {
    int tinggi = 5;
    int baris, angka;

    for (baris = 1; baris <= tinggi; baris++) {
        for (angka = 1; angka <= baris; angka++) {
            printf("%d ", angka);
        }
        printf("\n");
    }

    for (baris = tinggi - 1; baris > 0; baris--) {
        for (angka = 1; angka <= baris; angka++) {
            printf("%d ", angka);
        }
        printf("\n");
    }
    return 0;
}
