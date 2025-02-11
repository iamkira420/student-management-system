#include "Student.h" // Include the class definition
#include <string>
#include <iostream>
using namespace std;


int main() {
    Student stu = Student("John Titor", "MBNLUT005", "Computer Science", 76);

    cout << "Provided student has the following details: \n" << stu.getStudent() << endl;
}