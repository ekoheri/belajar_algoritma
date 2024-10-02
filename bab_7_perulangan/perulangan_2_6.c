#include <stdio.h>
#include <stdlib.h>

int main() {
    int desimal;
    char biner[33] = ""; // String untuk menyimpan biner, dengan satu karakter ekstra untuk null-terminator

    printf("Angka desimal : ");
    scanf("%d", &desimal);

    while (desimal > 0) {
        // Konversi sisa pembagian desimal dengan 2 menjadi karakter dan gabungkan dengan string biner
        char sisa[2];
        sprintf(sisa, "%d", desimal % 2);
        strcat(biner, sisa);
        // Bagi desimal dengan 2
        desimal = desimal / 2;
    }

    // Cetak hasil konversi biner
    printf("Biner: %s\n", strtoq(biner)); // Menggunakan strrev untuk membalikkan string biner

    return 0;
}
