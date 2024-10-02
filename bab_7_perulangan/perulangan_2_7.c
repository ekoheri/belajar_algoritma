#include <stdio.h>
#include <string.h>
int main() {
    // Deklarasi dan inisialisasi array dengan data string
    char strings[24][20] = {
        "", "Tahajud", "","","Subuh", "",
        "Duha","","","","","",
        "Dhuhur","","","Asyar","","",
        "Maghrib","Isyak","","","",""
    };

    char tekan_tombol;
    int iterasi_hari = 1;
    do {
        switch (iterasi_hari)
        {
        case 1:
            printf("Jadwal Sholat hari ini\n");
            break;
        case 2:
            printf("Jadwal Sholat besuk\n");
            break;
        case 3:
            printf("Jadwal Sholat lusa\n");
            break;
        default:
            printf("Jadwal Sholat %d hari yang akan datang\n", iterasi_hari);
            break;
        }
        iterasi_hari +=1;
        for (int i = 0; i < 24; i++) {
            if(strcmp(strings[i], "") != 0)
                printf("Jam %d: %s\n", i, strings[i]);
        }

        printf("Lihat jadwal Sholat hari berikutnya?(Y/N): ");
        tekan_tombol = getchar();
        getchar(); // mengabaikan tombol enter
    }while(tekan_tombol != 'N');
    return 0;
}