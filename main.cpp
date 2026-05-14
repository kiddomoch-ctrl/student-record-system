#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

vector<Student> students;

void addStudent() {
    Student s;
    cout << "Enter Student ID: ";
    cin >> s.id;
    cout << "Enter Student Name: ";
    cin >> s.name;
    cout << "Enter Student Marks: ";
    cin >> s.marks;

    students.push_back(s);
    cout << "Student added successfully!\n";
}

void displayStudents() {
    if (students.empty()) {
        cout << "No students found.\n";
        return;
    }

    for (auto s : students) {
        cout << "ID: " << s.id
             << " | Name: " << s.name
             << " | Marks: " << s.marks << endl;
    }
}

void searchStudent() {
    int id;
    cout << "Enter Student ID to search: ";
    cin >> id;

    for (auto s : students) {
        if (s.id == id) {
            cout << "Found: " << s.name << " | Marks: " << s.marks << endl;
            return;
        }
    }

    cout << "Student not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT MENU =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
