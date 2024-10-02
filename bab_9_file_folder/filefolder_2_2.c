//Simpan dengan nama file filefolder_2_2.c
#include <stdio.h>

int main() {
    FILE *fileText;
    char filename[] = "Foldernya_Eko_C/test.txt";
    char text[] = "Halo nama saya Eko Heri Susanto";

    // Buka file untuk penulisan
    fileText = fopen(filename, "w");

    // Periksa apakah file berhasil dibuka
    if (fileText == NULL) {
        printf("Gagal membuka file.\n");
        return 1;
    }

    // Tulis teks ke dalam file
    fprintf(fileText, "%s", text);

    // Tutup file
    fclose(fileText);

    printf("File berhasil dibuat: %s\n", filename);

    return 0;
}
