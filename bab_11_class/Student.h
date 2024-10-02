//Simpan dengan nama file Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

// Deklarasi class Student
class Student {
public:
    int id;
    std::string nama;
    char grade;
    // Fungsi untuk menambahkan data student
    void addData(int newId, const std::string& newName, char newGrade);
    // Fungsi untuk mengedit data student
    void editData(const std::string& newName, char newGrade);
    // Fungsi untuk menghapus data student
    void removeData();
};

#endif
