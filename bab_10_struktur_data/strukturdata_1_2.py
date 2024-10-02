# Simpan dengan nama file strukturdata_1_1.py

# Mendefinisikan class untuk representasi informasi siswa
class Student:
    def __init__(self, student_id, name, course, grade):
        self.id = student_id
        self.name = name
        self.course = course
        self.grade = grade

if __name__ == "__main__":
    # Menginisialisasi data untuk student1
    student1 = Student(101, "Eko Heri", "Algoritma dan Dasar Pemrograman", 85.5)

    # Menampilkan data student1
    print("Student ID:", student1.id)
    print("Name:", student1.name)
    print("Course:", student1.course)
    print("Grade: %.2f" % student1.grade)
