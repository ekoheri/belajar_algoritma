//Simpan dengan nama file Sarjana.h
#ifndef SARJANA_H
#define SARJANA_H

#include "Student.h"
#include <string>

// Deklarasi class Sarjana sebagai turunan dari Student
class Sarjana : public Student {
private:
    std::string jurusan;
    std::string gelar;
public:
    // Method untuk mengisikan data mahasiswa sarjana
    void addDataLulusan(int newId, const std::string& newNama, 
        char newGrade, const std::string& newJurusan, const std::string& newGelar);

    // Method untuk menampilkan detail mahasiswa sarjana
    void display();
};

#endif // SARJANA_H
