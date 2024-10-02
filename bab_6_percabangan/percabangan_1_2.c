#include "stdio.h"

int main () {
    int angka1;
    int angka2;

    printf("Inputkan angka 1 :");
    scanf("%d", &angka1);

    printf("Inputkan angka 2 :");
    scanf("%d", &angka2);

    if(angka1 > angka2) {
        printf("%d lebih besar %d\n", angka1, angka2);
    } else {
        printf("%d lebih kecil %d\n", angka1, angka2);
    }

    return 0;
}