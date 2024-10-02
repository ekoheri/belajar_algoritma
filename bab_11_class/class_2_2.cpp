#include <iostream>
#include "Student.h"

int main() {
    // Membuat objek student
    Student mahasiswa;

    // Menambahkan data student
    mahasiswa.addData(1234, "Eko Heri", 'A');

    // Menampilkan data student
    std::cout << "ID: " << mahasiswa.id << std::endl;
    std::cout << "Nama: " << mahasiswa.nama << std::endl;
    std::cout << "Grade: " << mahasiswa.grade << std::endl;

    // Mengedit data student
    mahasiswa.editData("Eko Heri Susanto", 'B');

    // Menampilkan data student setelah diubah
    std::cout << "\nSetelah diubah:" << std::endl;
    std::cout << "Nama: " << mahasiswa.nama << std::endl;
    std::cout << "Grade: " << mahasiswa.grade << std::endl;

    // Menghapus data student
    mahasiswa.removeData();

    // Menampilkan data student setelah dihapus
    std::cout << "\nSetelah dihapus:" << std::endl;
    std::cout << "ID: " << mahasiswa.id << std::endl;
    std::cout << "Nama: " << mahasiswa.nama << std::endl;
    std::cout << "Grade: " << mahasiswa.grade << std::endl;

    return 0;
}
