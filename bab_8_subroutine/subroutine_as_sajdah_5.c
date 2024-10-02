//Simpan dengan nama file subroutine_as_sajdah_5.c
#include <stdio.h>
#include <math.h>

#define PI 3.141592654

// Periode bulan sideris (pb_sideris) dalam sebulan 27.321661 hari.
#define pb_sideris 27.321661

//Jari-jari revolusi bulan 384264 Km
#define R 384264

//Jumlah hari dalam 1 tahun = 365.25636 hari
#define y 365.25636

int b () {
    // Jumlah bulan dalam 1000 tahun (b) = 12 x 1000
    int _b = 12 * 1000;
    return _b;
}

double  L() {
    // Periode revolusi bulan sideris dalam 1 bulan (T sideris)
    // T_sideris = 27.321661 hari x 23.56 jam = 643.698333 jam
    double T_sideris = pb_sideris * 23.56;

    // Kecepatan relatif bulan terhadap bumi (ve) = 2 x pi x R / T Sideris
    double ve = 2 * PI * R / T_sideris;

    // Sudut revolusi bulan sideris (a) = b_sideris / y) * 360
    // a =  (27.321661 / 365.25636) x 360
    double a = (pb_sideris / y) * 360;
    
    //Hitung cosinus sudut revolusi bulan
    float cosinus_a = cos(a * PI / 180);

    //Kecepatan relatif bulan terhadap bintang
    double v = ve * cosinus_a;

    //Panjang rute edar bulan selama 1 tahun
    double _L = v * T_sideris;

    return _L;
}

double t(){
    // Jumlah waktu dalam satu hari dalam hitungan detik (t)
    // 1 hari = 23 jam 56 menit 4,0906 detik = 86164.0906 detik
    double _t = (23 * 60 * 60) + (56 * 60) + 4.0906;
    return _t;
}

int main() {
    printf("Jumlah bulan dlm 1000 tahun : %d bulan\n", b());
    printf("Panjang edar bulan dalam 1 tahun : %f Km\n", L());
    printf("Jumlah waktu dalam sehari : %f detik\n", t());

    double c = b() * L() / t();
    printf("Kecepatan sang urusan (c) = %f Km/detik\n", c);

    return 0;
}
