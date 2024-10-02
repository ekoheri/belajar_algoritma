//Simpan dengan nama file strukturdata_2_1.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    char course[50];
    float grade;
};

int main() {
    struct Student siswa[3];
    char tekan_tombol;
    int iterasi = 0;

    do {
        printf("Id Siswa: ");
        scanf("%d", &siswa[iterasi].id);
        getchar(); // Menangkap karakter newline sebelumnya

        printf("Nama Siswa: ");
        fgets(siswa[iterasi].name, sizeof(siswa[iterasi].name), stdin);
        // Menghilangkan newline dari name jika ada
        siswa[iterasi].name[strcspn(siswa[iterasi].name, "\n")] = '\0';

        printf("Nilai: ");
        scanf("%f", &siswa[iterasi].grade);
        
        strcpy(siswa[iterasi].course, "Algoritma Pemrograman"); // Menyalin string ke course

        iterasi++;

        if(iterasi >= 3)
            break;
        printf("Apakah ingin menambahkan data lagi? (Y/T): ");
        scanf(" %c", &tekan_tombol);
        getchar(); // Mengabaikan karakter newline
    } while (tekan_tombol != 'T');

    //int max_length = 10;
    for (int i = 0; i < iterasi; i++) {
        printf("%d   | ", siswa[i].id);
        printf("%-*s | ", 10, siswa[i].name);
        printf("%s   |", siswa[i].course);
        printf("%.2f\n", siswa[i].grade);
    }

    return 0;
}
