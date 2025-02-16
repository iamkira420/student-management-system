#include "Student.h" // Include the class definition
#include "StudentManager.h"
#include <string>
#include <iostream>
using namespace std;


int main() {
    StudentManager sm;
    cout << "Should be an empty list of Student here: " << endl;
    sm.displayAllStudents();

    Student john = Student("John Titor", "JHNTTR002", "Computer Science", 76);
    Student robot = Student("Mr Robot", "MRRRBT007", "Cybersecurity", 95);
    Student elliot = Student("Elliot Alderson", "ELTADS004", "Psychology", 43);
    Student light = Student("Light Yagami", "LGTYGM005", "Ethics", 63);
    Student eren = Student("Eren Jeager", "ERBYGR008", "Special Relativity", 80);

    sm.addStudent(john);
    sm.addStudent(robot);
    sm.addStudent(elliot);
    sm.addStudent(light);
    sm.addStudent(eren);

    cout << "\n----    All Students    ----\n";
    sm.displayAllStudents();

    /*cout << "\nSearching for Student by Name: Elliot" << endl;
    sm.getStudentByName("Elliot Alderson");
    cout << "\nSearching for Student by Roll Number: ELTADS004" << endl;
    sm.getStudentByRollNumber("LGTYGM005");*/

    cout << "\n--- Updating a Student! ---" << endl;
    sm.updateStudent("MRRRBT007", "Data Science", 72);
    sm.getStudentByRollNumber("MRRRBT007");

    cout << "\n--- Updating a Student! ---" << endl;
    sm.deleteStudent("LGTYGM005");
    sm.deleteStudent("JHNTTR002");
    sm.displayAllStudents();

    return 0;
}
