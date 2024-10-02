#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10000 // Ukuran maksimum string

int main() {
    FILE *file;
    char *surat; // String untuk menyimpan isi file
    long length; // Panjang file

    // Buka file untuk dibaca
    file = fopen("al_fatihah.txt", "r");

    // Periksa apakah file berhasil dibuka
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return 1;
    }

    // Hitung panjang file
    fseek(file, 0, SEEK_END); // Pindah ke akhir file
    length = ftell(file); // Dapatkan posisi akhir file, yang juga menunjukkan panjang file
    fseek(file, 0, SEEK_SET); // Kembalikan ke awal file

    // Alokasikan memori untuk string
    surat = (char *)malloc((length + 1) * sizeof(char));
    if (surat == NULL) {
        printf("Gagal mengalokasikan memori.\n");
        fclose(file);
        return 1;
    }

    // Baca isi file dan simpan dalam string
    fread(surat, sizeof(char), length, file);
    surat[length] = '\0'; // Tambahkan null terminator ke akhir string

    char *ayat[15]; // Array untuk menyimpan setiap baris yang ter-split
    int jumlah_ayat = 0; // Jumlah baris yang ter-split 
    char *token = strtok(surat, "\n");
    while (token != NULL && jumlah_ayat < 14) {
        ayat[jumlah_ayat] = token;
        jumlah_ayat++;
        token = strtok(NULL, "\n");
    }

    printf("QS Al Fatihah:\n");
    int j = 1;
    for (int i = 0; i < jumlah_ayat; i++) {
        if(i % 2 == 0) {
            printf("Ayat %d\n", j);
            printf("%s\n", ayat[i]);
            j++;
        }
        else
            printf("Artinya : %s\n", ayat[i]);
    }


    // Bebaskan memori yang dialokasikan
    free(surat);

    // Tutup file setelah selesai membaca
    fclose(file);
    return 0;
}
