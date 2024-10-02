# Inisialisasi data
kata_asli = "PoltekAD"
panjang_kata = len(kata_asli)
list_kata_dibalik = [''] * panjang_kata  # Tempat untuk menyimpan string yang dibalik

# Inisialisasi counter
ecx = 0

# Mulai membalikkan string
ebx = panjang_kata - 1  # Set ebx ke indeks terakhir dari string
edx = 0  # Inisialisasi edx sebagai counter untuk kata_dibalik

while ebx >= 0:
    al = kata_asli[ebx]          # Ambil karakter dari akhir string
    list_kata_dibalik[edx] = al       # Simpan karakter ke kata_dibalik
    ebx -= 1                     # Kurangi ebx untuk bergerak ke kiri pada str
    edx += 1                     # Tambahkan edx untuk bergerak ke kanan pada kata_dibalik

# Gabungkan list menjadi string
kata_dibalik = ''.join(list_kata_dibalik)

# Tampilkan string yang sudah dibalik
print(kata_dibalik)