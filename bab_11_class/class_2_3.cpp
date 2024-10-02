//Simpan dengan nama file class_2_3.cpp
#include "Sarjana.h"
#include <iostream>

int main() {
    // Membuat objek mahasiswa sarjana
    Sarjana undergrad;
    undergrad.addDataLulusan(123, "Eko Heri", 'A', "Ilmu Komputer", "S.Kom");

    // Menampilkan detail mahasiswa sarjana
    undergrad.display();

    return 0;
}
