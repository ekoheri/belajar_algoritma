//Simpan dengan nama file subroutine_1_4.c
#include <stdio.h>
#include <string.h>
int main(){
    char nama[] = "Eko Heri Susanto";
    printf("Inputkan nama : ");

    fgets(nama, 30, stdin);

    printf("Nama anda : %s", nama);
    return 0;
}