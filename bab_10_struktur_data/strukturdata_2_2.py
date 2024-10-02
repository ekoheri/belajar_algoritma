#Simpan dengan nama file strukturdata_2_2.py
class Student:
    def __init__(self):
        self.id = 0
        self.name = ""
        self.course = "Algoritma Pemrograman"
        self.grade = 0.0

def main():
    students = [Student() for _ in range(3)]
    iteration = 0

    while True:
        print("Id Siswa:", end=" ")
        students[iteration].id = int(input())

        print("Nama Siswa:", end=" ")
        students[iteration].name = input()

        print("Nilai:", end=" ")
        students[iteration].grade = float(input())

        iteration += 1

        if iteration >= 3:
            break
        
        print("Apakah ingin menambahkan data lagi? (Y/T):", end=" ")
        tekan_tombol = input().strip().upper()
        if tekan_tombol != 'Y':
            break

    print("{:<5} | {:<10} | {:<25} | {:<5}".format("Id", "Nama", "Course", "Grade"))
    for student in students:
        print("{:<5} | {:<10} | {:<25} | {:.2f}".format(student.id, student.name, student.course, student.grade))

if __name__ == "__main__":
    main()
