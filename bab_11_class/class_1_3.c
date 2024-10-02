//Simpan dengan nama file class_1_2.cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Deklarasi struktur Student
typedef struct {
    int id;
    char nama[50];
    char grade;
} Student;

// Fungsi untuk menambahkan data student
void addData(Student *student, int id, const char *nama, char grade) {
    student->id = id;
    strcpy(student->nama, nama);
    student->grade = grade;
}

// Fungsi untuk mengedit data student
void editData(Student *student, const char *nama, char grade) {
    strcpy(student->nama, nama);
    student->grade = grade;
}

// Fungsi untuk menghapus data student
void removeData(Student *student) {
    student->id = 0;
    strcpy(student->nama, "");
    student->grade = '\0';
}

int main() {
    // Membuat objek student
    Student mahasiswa;

    // Menambahkan data student
    addData(&mahasiswa, 1234, "John Doe", 'A');

    // Menampilkan data student
    printf("ID: %d\n", mahasiswa.id);
    printf("Nama: %s\n", mahasiswa.nama);
    printf("Grade: %c\n", mahasiswa.grade);

    // Mengedit data student
    editData(&mahasiswa, "Jane Doe", 'B');

    // Menampilkan data student setelah diubah
    printf("\nSetelah diubah:\n");
    printf("Nama: %s\n", mahasiswa.nama);
    printf("Grade: %c\n", mahasiswa.grade);

    // Menghapus data student
    removeData(&mahasiswa);

    // Menampilkan data student setelah dihapus
    printf("\nSetelah dihapus:\n");
    printf("ID: %d\n", mahasiswa.id);
    printf("Nama: %s\n", mahasiswa.nama);
    printf("Grade: %c\n", mahasiswa.grade);

    return 0;
}
