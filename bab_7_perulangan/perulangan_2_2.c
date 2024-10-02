//Simpan dengan nama file perulangan_2_2.c
#include "stdio.h"
#include "stdbool.h"

int main() {
    int nomor = 1;
    bool ulangi = true;
    char tekan_tombol;
    while (ulangi != false) {
        printf("%d. Bismillahirrahmanirrahim\n", nomor);
        nomor++;
        printf("Berhenti?(Y/N)");
        tekan_tombol = getchar();
        getchar();
        if(tekan_tombol == 'Y')
            ulangi = false;
    }
    return 0;
}