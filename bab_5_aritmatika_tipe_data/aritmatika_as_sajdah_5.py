import math 

#Jumlah bulan dalam 1000 tahun (b) = 12 x 1000
b = 12 * 1000
print("Jumlah bulan dalam 1000 tahun (b) = %d bulan" %b)

#jumlah waktu dalam satu hari dalam hitungan detik (t)
#1 hari = 23 jam 56 menit 4,0906 detik = 86164.0906 detik
t =  (23 * 60 * 60) + (56 * 60) + 4.0906
print("Jumlah waktu dalam satu hari (t) = %f detik" %t)

#Periode bulan sideris dalam sebulan (b sideris) 27.321661 hari.
b_sideris = 27.321661

#Periode revolusi bulan sideris dalam 1 bulan (T sideris) 
#T_sideris = 27.321661 hari x 24 jam = 655,719864 jam
T_sideris = b_sideris * 23.56
print("Periode revolusi bulan sideris (T Sideris) = %f jam" %T_sideris)

#Kecepatan relatif bulan terhadap bumi (ve) = 2 x pi x R / T Sideris
#R = jari-jari revolusi bulan 384264 Km
R = 384264
ve = 2 * math.pi * R / T_sideris
print("Kecepatan relatif bulan terhadap bumi (ve) = %f Km/Jam" %ve)

#Sudut revolusi bulan sideris (a) = b_sideris / y) * 360
# y = jumlah hari dalam 1 tahun = 365.25636
# a =  (27.321661 / 365.25636) x 360
y = 365.25636
a = (b_sideris / y) * 360
print("Sudut revolusi bulan sideris (a) = %f derajat" %a)

#Kecepatan revolusi bulan terhadap bintang (v) = ve x cos_a
#cos_a = Cosinus (a x pi / 180)
cos_a = math.cos(a * math.pi / 180)
print("Cos a = %f" %cos_a)

v = ve * cos_a
print("Kecepatan relatif bulan terhadap bintang (v) = %f Km/Jam" %v)

#nilai panjang rute edar bulan selama 1 tahun (L) = v x T sideris
L = v * T_sideris
print("Panjang rute edar bulan selama 1 tahun (L) = %f Km" %L)

#Kecapatan sang urusan (c) = b x L / t
c = (b * L) / t
print("Kecepatan sang urusan (c) = %f Km/detik" %c)
