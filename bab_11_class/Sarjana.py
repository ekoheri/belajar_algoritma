#Simpan dengan nama file Sarjana.py
from Student import Student

class Sarjana(Student):
    def __init__(self):
        self.jurusan = ""
        self.gelar = ""

    def add_data_lulusan(self, new_id, new_name, new_grade, new_jurusan, new_gelar):
        self.add_data(new_id, new_name, new_grade)
        self.jurusan = new_jurusan
        self.gelar = new_gelar

    # Method untuk menampilkan detail mahasiswa sarjana
    def display(self):
        print("Undergraduate Student")
        print("ID:", self.id, ", Name:", self.nama, ", Grade:", self.grade)
        print("Jurusan:", self.jurusan)
        print("Gelar:", self.gelar)
