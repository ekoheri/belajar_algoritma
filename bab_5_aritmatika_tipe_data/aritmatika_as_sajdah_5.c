//Simpan dengan nama file aritmatika_as_sajdah_5.c
#include <stdio.h>
#include <math.h>
#define PI 3.141592654
// Periode bulan sideris dalam sebulan (b_sideris) 27.321661 hari.
#define b_sideris 27.321661
// R = jari-jari revolusi bulan 384264 Km
#define R 384264
// y = jumlah hari dalam 1 tahun = 365.25636 hari
#define y 365.25636

int main() {
    // Jumlah bulan dalam 1000 tahun (b) = 12 x 1000
    int b = 12 * 1000;
    printf("Jumlah bulan dalam 1000 tahun (b) = %d bulan\n", b);

    // Jumlah waktu dalam satu hari dalam hitungan detik (t)
    // 1 hari = 23 jam 56 menit 4,0906 detik = 86164.0906 detik
    double t = (23 * 60 * 60) + (56 * 60) + 4.0906;
    printf("Jumlah waktu dalam satu hari (t) = %f detik\n", t);

    // Periode revolusi bulan sideris dalam 1 bulan (T sideris)
    // T_sideris = 27.321661 hari x 24 jam = 655,719864 jam
    double T_sideris = b_sideris * 23.56;
    printf("Periode revolusi bulan sideris (T Sideris) = %f jam\n", T_sideris);

    // Kecepatan relatif bulan terhadap bumi (ve) = 2 x pi x R / T Sideris
    double ve = 2 * PI * R / T_sideris;
    printf("Kecepatan relatif bulan terhadap bumi (ve) = %f Km/Jam\n", ve);

    // Sudut revolusi bulan sideris (a) = b_sideris / y) * 360
    // a =  (27.321661 / 365.25636) x 360

    double a = (b_sideris / y) * 360;
    printf("Sudut revolusi bulan sideris (a) = %f derajat\n", a);

    // Kecepatan revolusi bulan terhadap bintang (v) = ve x cos_a
    // cos_a = Cosinus (a x pi / 180)
    float cos_a = cos(a * PI / 180);
    printf("Cos a = %f\n", cos_a);

    double v = ve * cos_a;
    printf("Kecepatan relatif bulan terhadap bintang (v) = %f Km/Jam\n", v);

    // nilai panjang rute edar bulan selama 1 tahun (L) = v x T sideris
    double L = v * T_sideris;
    printf("Panjang rute edar bulan selama 1 tahun (L) = %f Km\n", L);

    // Kecapatan sang urusan (c) = b x L / t
    double c = b * L / t;
    printf("Kecepatan sang urusan (c) = %f Km/detik\n", c);

    return 0;
}
