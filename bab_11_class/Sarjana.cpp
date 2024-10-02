//Simpan dengan nama file Sarjana.cpp
#include <iostream>
#include <string>
#include "Sarjana.h"

// Implementasi method untuk mengisi data sarjana
void Sarjana::addDataLulusan(int newId, const std::string& newName, 
    char newGrade, const std::string& newJurusan, 
    const std::string& newGelar) {
    addData(newId, newName, newGrade);
    jurusan = newJurusan;
    gelar = newGelar;
}

// Implementasi method untuk menampilkan detail mahasiswa sarjana
void Sarjana::display() {
    std::cout << "Undergraduate Student" << std::endl;
    std::cout << "ID: " << id << ", Name: " << nama << ", Grade: " << grade << std::endl;
    std::cout << "Jurusan: " << jurusan << std::endl;
    std::cout << "Gelar: " << gelar << std::endl;
}
