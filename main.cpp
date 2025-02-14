#include "Student.h" // Include the class definition
#include <string>
#include <iostream>
using namespace std;


int main() {
    Student stu1 = Student("JohnTitor", "MBNLUT005", "ComputerScience", 76);

    cout << "Enter the student details as prompted: " << endl;
    string name, roll, course;
    int marks;

    cout << "Student name: ";
    cin >> name;
    cout << "\nStudent Roll Number: ";
    cin >> roll;
    cout << "\nStudent Course: ";
    cin >> course;
    cout << "\nStudent marks: ";
    cin >> marks;

    Student stu2 = Student(name, roll, course, marks);
    if (stu1.equalStudent(stu2)) {
        cout << ">> This is the same student." << endl;
    } else {
        cout << ">> The students are different!" << endl;
    }
    cout << ">> Student 1 is: <<\n" << stu2.toString() << endl;
    cout << ">> Student 2 is <<\n" << stu2.toString() << endl;

    return 0;
}
