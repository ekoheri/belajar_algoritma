// Simpan dengan nama file preprocessort_3_4.c
#include <stdio.h>
#include "preprocessor_jawa.h"

wilangan_utuh utama() 
wiwit
    aksara jeneng[50];
    wilangan_utuh umur;
    pecahan dhuwur;
    

    nyithak("Jenengmu sopo? ");
    ndelok_string_aman(jeneng, 50, stdin);

    nyithak("Umurmu piro? ");
    nglebokne("%d", &umur);

    nyithak("Dhuwurmu piro? ");
    nglebokne("%f", &dhuwur);

    nyithak("jenengmu %s", jeneng);
    nyithak("Umurmu %d tahun\n", umur);
    nyithak("Dhuwurmu %.2f cm.\n", dhuwur);

    balekno 0;
rampung