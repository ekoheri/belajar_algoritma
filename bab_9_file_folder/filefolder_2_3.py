#Simpan dengan nama file filefolder_2_3.py
filename = "Foldernya_Eko_Python/test.txt"
text = "Halo nama saya Eko Heri Susanto"

try:
    # Buka file untuk penulisan
    with open(filename, "w") as fileText:
        # Tulis teks ke dalam file
        fileText.write(text)
    print("File berhasil dibuat:", filename)
except IOError:
    print("Gagal membuka file.")
