//Simpan dengan nama file prepocessor_1_1.c
#include <stdio.h>

#define PI 3.14159

int main() {
    float jari_jari, luas;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);

    // Menghitung luas lingkaran
    luas = PI * jari_jari * jari_jari;

    printf("Luas lingkaran & jari-jari %.2f adalah %.2f\n", jari_jari, luas);

    return 0;
}
