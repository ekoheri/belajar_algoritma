#Simpan dengannama file filefolder_2_8.py
def main():
    filename = "al_fatihah.txt"

    try:
        with open(filename, "r") as file:
            surat = file.readlines()

        print("QS Al Fatihah:")
        for i in range(0, len(surat), 2):
            print(f"Ayat {i//2 + 1}")
            print(surat[i].strip())
            print(f"Artinya : {surat[i+1].strip()}")

    except FileNotFoundError:
        print("Gagal membuka file.")
    except Exception as e:
        print("Terjadi kesalahan:", e)

if __name__ == "__main__":
    main()
