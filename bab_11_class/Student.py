#Simpan dengan nama file Student.py
class Student:
    def __init__(self):
        self.id = 0
        self.nama = ""
        self.grade = '\0'

    # Method untuk menambahkan data student
    def add_data(self, new_id, new_name, new_grade):
        self.id = new_id
        self.nama = new_name
        self.grade = new_grade

    # Method untuk mengedit data student
    def edit_data(self, new_name, new_grade):
        self.nama = new_name
        self.grade = new_grade

    # Method untuk menghapus data student
    def remove_data(self):
        self.id = 0
        self.nama = ""
        self.grade = '\0'
