#Simpan dengan nama file percabangan_4_1.py
jawaban = input("Apakah anda suci dari hadast(y/t)? : ")
if jawaban == 'y':
    jawaban = input("Apakah bersentuhan dgn lawan jenis bukan mahram? (y/t) : ")
    if jawaban == 'y':
        jawaban = input("Apakah ada air? (y/t) : ")
        if jawaban == 'y':
            jawaban = input("Apakah sakit? (y/t) : ")
            if jawaban == 'y':
                print("Tayamum\nSholat")
            elif jawaban == 't':
                print("Wudhu\nSholat")
        elif jawaban == 't':
            print("Tayamum\nSholat")
    elif jawaban == 't':
        print("Sholat")
elif jawaban == 't':
    jawaban = input("Apakah ada air (y/t)? : ")
    if jawaban == 'y':
        jawaban = input("Apakah anda junub? (y/t) : ")
        if jawaban == 'y':
            jawaban = input("Apakah sakit? (y/t) : ")
            if jawaban == 'y':
                print("Tayamum\nSholat")
            elif jawaban == 't':
                print("Mandi\nWudhu\nSholat")
        elif jawaban == 't':
            jawaban = input("Apakah sakit? (y/t) : ")
            if jawaban == 'y':
                print("Tayamum\nSholat")
            elif jawaban == 't':
                print("Wudhu\nSholat")
    elif jawaban == 't':
        print("Silahkan Tayamum lalu Sholat.")