#include "stdio.h"

int main() {
    int angka;
    printf("Inputkan angka hari : ");
    scanf("%d", &angka);
    switch (angka)
    {
    case 1:
        printf("Ahad\n");
        break;
    case 2:
        printf("Senin\n");
        break;
    case 3:
        printf("Selasa\n");
        break;
    case 4:
        printf("Rabu\n");
        break;
    case 5:
        printf("Kamis\n");
        break;
    case 6:
        printf("Jumat\n");
        break;
    case 7:
        printf("Sabtu\n");
        break;
    default:
        printf("Nomor hari salah\n");
        break;
    }

    return 0;
}