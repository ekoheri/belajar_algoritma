#include "Student.h"
#include <iostream>

// Fungsi untuk menambahkan data student
void Student::addData(int newId, const std::string& newName, char newGrade) {
    id = newId;
    nama = newName;
    grade = newGrade;
}

// Fungsi untuk mengedit data student
void Student::editData(const std::string& newName, char newGrade) {
    nama = newName;
    grade = newGrade;
}

// Fungsi untuk menghapus data student
void Student::removeData() {
    id = 0;
    nama = "";
    grade = '\0';
}
