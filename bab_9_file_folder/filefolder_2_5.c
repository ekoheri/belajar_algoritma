//Simpan dengan nama file filefolder_2_5.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    FILE* filename;
    char karakter;
 
    // Membuka file dgnmode READ(r)
    filename = fopen("Foldernya_Eko_C/test.txt", "r");
     if (NULL == filename) {
        printf("Tidak dapat membuka file test.txt \n");
    }
 
    //membaca isi file
    do {
        karakter = fgetc(filename);
        printf("%c", karakter);
    } while (karakter != EOF);
 
    // Menutup file
    fclose(filename);
    return 0;
}