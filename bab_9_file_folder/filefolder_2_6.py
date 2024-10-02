#Simpan dengan nama file filefolder_2_6.py
filename = "Foldernya_Eko_Python/test.txt"

try:
    with open(filename, "r") as file:
        karakter = file.read()
        print(karakter, end="")
except FileNotFoundError:
    print("Tidak dapat membuka file test.txt")
