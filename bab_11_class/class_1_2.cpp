//Simpan dengan nama file class_1_2.cpp
#include <iostream>
#include <string>

using namespace std;

// Deklarasi class Student
class Student {
public:
    int id;
    string nama;
    char grade;

    // Fungsi untuk menambahkan data student
    void addData(int newId, const string& newName, char newGrade) {
        id = newId;
        nama = newName;
        grade = newGrade;
    }

    // Fungsi untuk mengedit data student
    void editData(const string& newName, char newGrade) {
        nama = newName;
        grade = newGrade;
    }

    // Fungsi untuk menghapus data student
    void removeData() {
        id = 0;
        nama = "";
        grade = '\0';
    }
};

int main() {
    // Membuat objek student
    Student mahasiswa;

    // Menambahkan data student
    mahasiswa.addData(1234, "Eko Heri", 'A');

    // Menampilkan data student
    cout << "ID: " << mahasiswa.id << endl;
    cout << "Nama: " << mahasiswa.nama << endl;
    cout << "Grade: " << mahasiswa.grade << endl;

    // Mengedit data student
    mahasiswa.editData("Eko Heri Susanto", 'B');

    // Menampilkan data student setelah diubah
    cout << "\nSetelah diubah:" << endl;
    cout << "Nama: " << mahasiswa.nama << endl;
    cout << "Grade: " << mahasiswa.grade << endl;

    // Menghapus data student
    mahasiswa.removeData();

    // Menampilkan data student setelah dihapus
    cout << "\nSetelah dihapus:" << endl;
    cout << "ID: " << mahasiswa.id << endl;
    cout << "Nama: " << mahasiswa.nama << endl;
    cout << "Grade: " << mahasiswa.grade << endl;

    return 0;
}
