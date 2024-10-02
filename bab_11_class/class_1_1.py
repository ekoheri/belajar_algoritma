class Student:
    def __init__(self):
        self.id = 0
        self.nama = ""
        self.grade = '\0'

    # Fungsi untuk menambahkan data student
    def addData(self, newId, newName, newGrade):
        self.id = newId
        self.nama = newName
        self.grade = newGrade

    # Fungsi untuk mengedit data student
    def editData(self, newName, newGrade):
        self.nama = newName
        self.grade = newGrade

    # Fungsi untuk menghapus data student
    def removeData(self):
        self.id = 0
        self.nama = ""
        self.grade = '\0'

# Membuat objek student
mahasiswa = Student()

# Menambahkan data student
mahasiswa.addData(1234, "Eko Heri", 'A')

# Menampilkan data student
print("ID:", mahasiswa.id)
print("Nama:", mahasiswa.nama)
print("Grade:", mahasiswa.grade)

# Mengedit data student
mahasiswa.editData("Eko Heri", 'B')

# Menampilkan data student setelah diubah
print("\nSetelah diubah:")
print("Nama:", mahasiswa.nama)
print("Grade:", mahasiswa.grade)

# Menghapus data student
mahasiswa.removeData()

# Menampilkan data student setelah dihapus
print("\nSetelah dihapus:")
print("ID:", mahasiswa.id)
print("Nama:", mahasiswa.nama)
print("Grade:", mahasiswa.grade)
