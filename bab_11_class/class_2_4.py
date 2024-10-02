#Simpan dengan nama file class_2_4.py
from Sarjana import Sarjana
def main():
    # Membuat objek mahasiswa sarjana
    undergrad = Sarjana()
    #Mengisi data sarjana
    undergrad.add_data_lulusan(123, "Eko", "A", "Informatika", "S.Kom")
    # Menampilkan detail mahasiswa sarjana
    undergrad.display()

if __name__ == "__main__":
    main()
