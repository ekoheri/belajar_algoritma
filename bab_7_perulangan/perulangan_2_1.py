#Simpan dengan nama file perulangan_2_1.py
nomor = 1
ulangi = True
while ulangi == True:
    print("%d. Bismillahirrahmanirrahim" %nomor)
    nomor += 1
    tekan_tombol = input("Berhenti?(Y/N)")
    if(tekan_tombol == "Y"):
        ulangi = False
