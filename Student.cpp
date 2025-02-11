/**
 * Simple Student Management System that allows users to perform CRUD (Create, Read, Update, Delete) operations
 * on a list of students. Each student have details such as Names, Roll Number, Course, and Marks. 
 * @author BK201
 * @date 11 February 2025
*/

#include "Student.h" // Include the corresponding header file

/**
 * Constructors
 *
*/

Student::Student() : name(""), rollNumber(""), courseName(""), marks(-1) {
}

    
Student::Student(string stuName, string stuRollNumber, string stuCourseName, int stuMarks) {
    name = stuName;
    rollNumber = stuRollNumber;
    courseName = stuCourseName;
    if (stuMarks < 0 || stuMarks > 100) {
        marks = -1;
    } else {
        marks = stuMarks;
    }
}



/**
 * Setters
 */
void Student::setName(string stuName) {
    name = stuName;
}

void Student::setRollNumber(string rollNum) {
    rollNumber = rollNum;
}

void Student::setCourseName(string course) {
    courseName = course;
}

void Student::setMarks(int stuMarks) {
    if (stuMarks < 0 || stuMarks > 100) {
        marks = -1;
    } else {
        marks = stuMarks;
    }
}

/**
 * Getters
 */
string Student::getName() {
    cout << name << endl;
}

string Student::getRollNumber() {
    cout << rollNumber << endl;
}

string Student::getCourseName() {
    cout << courseName << endl;
}

int Student::getMarks() {
    return marks;
}

string Student::getStudent() {
    return "Name: " + name + "\nRoll Number: " + rollNumber + "\nCourse: " + courseName + "\nMarks: " + to_string(marks) + "\n";
}

