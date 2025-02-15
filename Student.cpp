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

Student::Student() : name(""), rollNumber(""), courseName(""), marks(-1) { }

Student::Student(Student& stu) {
    name = stu.name;
    rollNumber = stu.rollNumber;
    courseName = stu.courseName;
    marks = stu.marks;
}
    
Student::Student(string stuName, string stuRollNumber, string stuCourseName, int stuMarks) {
    setStudent(stuName, stuRollNumber, stuCourseName, stuMarks);
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

void Student::setStudent(string studentName, string studentRollNumber, string studentCourse, int studentMarks) {
    name = studentName;
    rollNumber = studentRollNumber;
    courseName = studentCourse;
    if (studentMarks > 0 || studentMarks > 100) {
        marks = studentMarks;
    } else {
        marks = -1;
    }
}

void Student::setStudent(Student stu) {
    name = stu.name;
    rollNumber = stu.rollNumber;
    courseName = stu.courseName;
    marks = stu.marks;
}

/**
 * Getters
 */
string Student::getName() {
    return name;
}

string Student::getRollNumber() {
    return rollNumber;
}

string Student::getCourseName() {
    return courseName;
}

int Student::getMarks() {
    return marks;
}

Student Student::getStudent() {
    return Student(name, rollNumber, courseName, marks);
}

Student Student::getStudent(string stuName, string stuRollNumber, string stuCourseName, int stuMarks) {
    return Student(stuName, stuRollNumber, stuCourseName, stuMarks);
}

Student Student::getStudent(Student stu) {
    return Student(stu.name, stu.rollNumber, stu.courseName, stu.marks);
}

bool Student::equalStudent(Student otherStudent) {
    return (
        name == otherStudent.name &&
        rollNumber == otherStudent.rollNumber &&
        courseName == otherStudent.courseName && 
        marks == otherStudent.marks
    );
}

string Student::toString() {
    return "Name: " + getName() + "\nRoll Number: " + getRollNumber() + "\nCourse: " + getCourseName() + "\nMarks Obtained: " + to_string(marks) + "\n";
}

string Student::toString(Student student) {
    return "Name: " + student.getName() + "\nRoll Number: " + student.getRollNumber() + "\nCourse: " + student.getCourseName() + "\nMarks Obtained: " + to_string(student.getMarks()) + "\n";
}


