//Simpan dengan nama file percabangan_3.c
#include "stdio.h"

int main() {
    int angka;
    printf("Inputkan angka :");
    scanf("%d", &angka);
    if(angka % 2 == 1) {
        printf("%d Angka Ganjil\n", angka);
    } else 
    {
        printf("%d Angka Genap\n", angka);
    }
    return 0;
}