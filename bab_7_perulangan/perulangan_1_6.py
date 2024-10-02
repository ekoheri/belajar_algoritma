#Simpann dengan nama file perulangan_1_6.py
tinggi = 5

for baris in range(1, tinggi + 1):
    for angka in range(1, baris + 1):
        print(angka, end=" ")
    print()  

for baris in range(tinggi - 1, 0, -1):
    for angka in range(1, baris + 1):
        print(angka, end=" ")
    print()
