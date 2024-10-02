#Simpan dengan nama file perulangan_2_7.py
iterasi_hari = 1
ulangi = True
while ulangi == True:
    if(iterasi_hari == 1):
        print("Jadwal Sholat hari ini")
    elif(iterasi_hari == 2):
        print("Jadwal Sholat untuk besuk")
    elif(iterasi_hari == 3):
        print("Jadwal Sholat untuk lusa")
    else :
        print("Jadwal Sholat untuk %d hari yang akan datang" %iterasi_hari)
    iterasi_hari += 1

    for jam in range(24):
        if(jam == 1):
            print("Jam %d waktunya sholat sunnah Tahajud" %jam)
        elif(jam == 4):
            print("Jam %d waktunya sholat Subuh" %jam)
        elif(jam == 6):
            print("Jam %d waktunya sunnah Dhuha" %jam)
        elif(jam == 12):
            print("Jam %d waktunya sholat DZuhur" %jam)
        elif(jam == 15):
            print("Jam %d waktunya sholat Asyar" %jam)
        elif(jam == 18):
            print("Jam %d waktunya sholat Maghrib" %jam)
        elif(jam == 19):
            print("Jam %d waktunya sholat Isyak" %jam)
            
    tekan_tombol = input("Lihat jadwal Sholat hari berikutnya?(Y/N): ")
    if(tekan_tombol == "N"):
        ulangi = False




