#include <stdio.h>

int main() {
    int batas_bawah, batas_atas;
    printf("Masukkan batas bawah: ");
    scanf("%d", &batas_bawah);
    printf("Masukkan batas atas: ");
    scanf("%d", &batas_atas);

    printf("Bilangan prima antara %d dan %d adalah:\n", batas_bawah, batas_atas);

    int angka = batas_bawah;
    while (angka <= batas_atas) {
        int pembagi = 2;
        int prima = 1; // Asumsikan angka adalah prima

        // Periksa apakah angka adalah prima
        while (pembagi <= angka / 2) {
            if (angka % pembagi == 0) {
                prima = 0; // Ubah status prima menjadi 0 jika ditemukan pembagi selain 1 dan dirinya sendiri
                break; // Keluar dari loop pembagi karena sudah tidak perlu lagi memeriksa
            }
            pembagi++;
        }

        // Jika angka masih prima setelah loop di atas, cetak angka tersebut
        if (prima == 1) {
            printf("%d ", angka);
        }

        angka++;
    }

    printf("\n");

    return 0;
}
