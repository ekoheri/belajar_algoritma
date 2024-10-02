//Simpan dengan nama file percabangan_7.c
#include "stdio.h"

int main() {
    char jawaban;
    printf("Apakah anda suci dari hadast(y/t)? : ");
    jawaban = getchar();
    getchar();
    if(jawaban == 'y') {
        printf("Apakah bersentuhan dgn lawan jenis bukan mahram? (y/t) :");
        jawaban = getchar();
        getchar();
        if(jawaban == 'y') {
            printf("Apakah ada air? (y/t) :");
            jawaban = getchar();
            getchar();
            if(jawaban == 'y') {
                printf("Apakah sakit? (y/t) :");
                jawaban = getchar();
                getchar();
                if(jawaban == 'y') {
                    printf("Tayamum\nSholat\n");
                } else if(jawaban == 't') {
                    printf("Wudhu\nSholat\n");
                }
            } else if(jawaban == 't') {
                printf("Tayamum\nSholat\n");
            }
        } else if (jawaban == 't') {
            printf("Sholat\n");
        }
    } else if(jawaban == 't') {
        printf("Apakah ada air (y/t)? : ");
        jawaban = getchar();
        getchar();
        if(jawaban == 'y') {
            printf("Apakah anda junub? (y/t) : ");
            jawaban = getchar();
            getchar();
            if(jawaban == 'y') {
                printf("Apakah sakit? (y/t) :");
                jawaban = getchar();
                getchar();
                if(jawaban == 'y') {
                    printf("Tayamum\nSholat\n");
                } else if(jawaban == 't') {
                    printf("Mandi\nWudhu\nSholat\n");
                }
            } else if(jawaban == 't') {
                printf("Apakah sakit? (y/t) :");
                jawaban = getchar();
                getchar();
                if(jawaban == 'y') {
                    printf("Tayamum\nSholat\n");
                } else if(jawaban == 't') {
                    printf("Wudhu\nSholat\n");
                }
            }
        } else if (jawaban == 't'){
            printf("Silahkan Tayamum lalu Sholat.\n");
        }
    }
    return 0;
}