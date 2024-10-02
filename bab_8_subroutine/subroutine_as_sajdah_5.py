import math

PI = 3.141592654
pb_sideris = 27.321661
R = 384264
y = 365.25636

def b():
    # Jumlah bulan dalam 1000 tahun (b) = 12 x 1000
    _b = 12 * 1000
    return _b

def L():
    # Periode revolusi bulan sideris dalam 1 bulan (T sideris)
    # T_sideris = 27.321661 hari x 23.56 jam = 643.698333 jam
    T_sideris = pb_sideris * 23.56

    # Kecepatan relatif bulan terhadap bumi (ve) = 2 x pi x R / T Sideris
    ve = 2 * PI * R / T_sideris

    # Sudut revolusi bulan sideris (a) = b_sideris / y) * 360
    # a =  (27.321661 / 365.25636) x 360
    a = (pb_sideris / y) * 360
    
    #Hitung cosinus sudut revolusi bulan
    cosinus_a = math.cos(a * PI / 180)

    #Kecepatan relatif bulan terhadap bintang
    v = ve * cosinus_a

    #Panjang rute edar bulan selama 1 tahun
    _L = v * T_sideris

    return _L

def t():
    # Jumlah waktu dalam satu hari dalam hitungan detik (t)
    # 1 hari = 23 jam 56 menit 4,0906 detik = 86164.0906 detik
    _t = (23 * 60 * 60) + (56 * 60) + 4.0906
    return _t

def main():
    print("Jumlah bulan dalam 1000 tahun :", b(), "bulan")
    print("Panjang edar bulan dalam 1 tahun :", L(), "Km")
    print("Jumlah waktu dalam sehari :", t(), "detik")

    c = b() * L() / t()
    print("Kecepatan sang urusan (c) =", c, "Km/detik")

if __name__ == "__main__":
    main()
