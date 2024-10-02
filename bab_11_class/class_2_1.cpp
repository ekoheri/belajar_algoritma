#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

class Student {
private:
    string name;
    int age;
    string id;

public:
    // Constructor
    Student(string n = "", int a = 0, string i = "") : name(n), age(a), id(i) {}

    // Getter methods
    string getName() const { return name; }
    int getAge() const { return age; }
    string getId() const { return id; }

    // Setter methods
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setId(string i) { id = i; }

    // Convert student to JSON string
    string toJSONString() const {
        stringstream ss;
        ss << "{";
        ss << "\"name\": \"" << name << "\", ";
        ss << "\"age\": " << age << ", ";
        ss << "\"id\": \"" << id << "\"";
        ss << "}";
        return ss.str();
    }
};

class StudentManager {
private:
    static const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int count;
    string filename;

public:
    // Constructor
    StudentManager(string fname) : count(0), filename(fname) {}

    // Method to load students from file
    void loadStudents() {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Error opening file: " << filename << endl;
            return;
        }

        string line;
        int index = 0;
        while (getline(file, line)) {
            stringstream ss(line);
            string name, id;
            int age;

            getline(ss, name, ',');
            ss >> age;
            ss.ignore(); // ignore the comma
            getline(ss, id);

            students[index++] = Student(name, age, id);
        }

        count = index;
        file.close();
    }

    // Method to save students to file
    void saveStudents() {
        ofstream file(filename);
        if (!file.is_open()) {
            cerr << "Error opening file: " << filename << endl;
            return;
        }

        for (int i = 0; i < count; ++i) {
            file << students[i].toJSONString() << endl;
        }

        file.close();
    }

    // Method to create a new student
    void createStudent(string name, int age, string id) {
        if (count >= MAX_STUDENTS) {
            cout << "Cannot add more students. Reached maximum capacity." << endl;
            return;
        }

        students[count++] = Student(name, age, id);
        saveStudents();
        cout << "Student added successfully." << endl;
    }

    // Method to read/display all students
    void displayStudents() {
        if (count == 0) {
            cout << "No students found." << endl;
            return;
        }
        cout << "List of Students:" << endl;
        for (int i = 0; i < count; ++i) {
            cout << setw(2) << i + 1 << ". ";
            cout << "Name: " << students[i].getName() << ", ";
            cout << "Age: " << students[i].getAge() << ", ";
            cout << "ID: " << students[i].getId() << endl;
        }
    }

    // Method to update student details by index
    void updateStudent(int index, string name, int age) {
        if (index < 0 || index >= count) {
            cout << "Invalid student index." << endl;
            return;
        }

        students[index].setName(name);
        students[index].setAge(age);
        saveStudents();
        cout << "Student details updated successfully." << endl;
    }

    // Method to delete student by index
    void deleteStudent(int index) {
        if (index < 0 || index >= count) {
            cout << "Invalid student index." << endl;
            return;
        }

        for (int i = index; i < count - 1; ++i) {
            students[i] = students[i + 1];
        }
        count--;
        saveStudents();
        cout << "Student deleted successfully." << endl;
    }
};

int main() {
    StudentManager manager("students.json");
    manager.loadStudents();

    manager.createStudent("John", 20, "001");
    manager.createStudent("Alice", 22, "002");

    cout << "Initial list of students:" << endl;
    manager.displayStudents();

    manager.updateStudent(0, "Johnny", 21);
    manager.deleteStudent(1);

    cout << "Updated list of students:" << endl;
    manager.displayStudents();

    return 0;
}
