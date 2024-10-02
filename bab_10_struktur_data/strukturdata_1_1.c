// Simpan dengan nama file strukturdata_1_1.c
#include <stdio.h>
#include <string.h>

//Mendefinisikan struktur data untuk siswa
struct Student {
    int id;
    char * name;
    char * course;
    float grade;
};

int main() {
    // Mendeklarasikan variabel bertipe struct Student
    struct Student student1;

    // Menginisialisasi data untuk student1
    student1.id = 101;
    student1.name = "Eko Heri";
    student1.course = "Algoritma dan Dasar Pemrograman";
    student1.grade = 85.5;

    // Menampilkan data student1
    printf("Student ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Name: %s\n", student1.course);
    printf("Grade: %.2f\n", student1.grade);

    return 0;
}
