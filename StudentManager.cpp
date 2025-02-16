#include "Student.h"
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

#include "StudentManager.h"

 
// Add a Student to the list of students (CREATE)
void StudentManager::addStudent(Student stu) {
    students[stu.getRollNumber()] = stu;
    cout << "Student added successfully." << endl;
}

// Retrieve a Student by roll number (READ)
void StudentManager::getStudentByRollNumber(string rollNumber) {
    auto iterator = students.find(rollNumber);

    if (iterator != students.end()) {
        cout << iterator->second.getStudent().toString() << endl;
    } else {
        cout << "Student not found! Please add student and try again!" << endl;
    }
}

// Retrieve Student by name (READ)
void StudentManager::getStudentByName(string name) {
    for (auto& pair : students) {
        if (pair.second.getName() == name) {
            cout << pair.second.getStudent().toString() << endl;
            return;
        }
    }
    cout << "Student not found! Please add student and try again!" << endl;
}

// Display all students (READ)
void StudentManager::displayAllStudents() {
    if (students.empty()) {
        cout << "No students in the system! Please add students and try again!" << endl;
        return;
    }
    for (auto& pair : students) {
        cout << pair.second.getStudent().toString() << endl;
    }
}

// Update student marks or course name (UPDATE)
void StudentManager::updateStudent(string rollNumber, string newCourse, int newMarks) {
    auto iterator = students.find(rollNumber);

    if (iterator != students.end()) {
        iterator->second.setCourseName(newCourse);
        iterator->second.setMarks(newMarks);
        cout << "Student updated successfully." << endl;
    } else {
        cout << "Student not found! Please add student and try again!" << endl;
    }
}

// Delete a student (DELETE)
void StudentManager::deleteStudent(string rollNumber) {
    if (students.erase(rollNumber)) {
        cout << "Student deleted successfully." << endl;
    } else {
        cout << "Student not found! Please add student and try again!" << endl;
    }
}
