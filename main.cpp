#include "Student.h" // Include the class definition
#include "StudentManager.h"
#include <string>
#include <iostream>
using namespace std;


int main() {
    StudentManager sm;
    string burner = 
        "Welcome to my basic SMS (Student Management System) lol\n"
        "*****************************************************************\n"
        "   __________      ______         ______         _________  \n"
        "  /          |    |      \\       /      |       /         | \n"
        " |     ______|    |       \\     /       |      |     _____| \n"
        " |     \\          |        \\   /        |      |     \\       \n"
        " \\      \\         |         \\ /         |      \\      \\      \n"
        "  \\      \\        |                     |       \\      \\     \n"
        "   \\      \\       |        |    |       |        \\      \\    \n"
        "    \\      \\      |        |    |       |         \\      \\   \n"
        " ____\\      |     |        |    |       |      ____\\      |  \n"
       "|           |     |        |    |       |     |           |  \n"
       "|__________/      |________|    |_______|     |__________/    \n"
       "******************************************************************\n";   
        


    string mainMenu = 
            "Please select an option below: \n"
            "0. Print burner? \n"
            "1. Add a new student: \n"
            "2. Search for an existing student using student name: \n"
            "3. Search for an existing student using student roll number: \n"
            "4. Update an existing student's course and marks: \n"
            "5. Delete an existing student: \n"
            "6. Display all existing students: \n";

    int choice;
    while (true) { //USE A DO-WHILE LOOP
        cout << "\n" << mainMenu << "\n[~/random/user]$ ";
        cin >> choice;

        if (choice == 0) {
            cout << burner << endl;
        } else if (choice == 1) {
            cout << "Enter the student name: \n";
            string name;
            string rollNumber;
            string  course;
            int marks;
            cin >> name;
            cout << "Enter the student roll number: \n";
            cin >> rollNumber;
            cout << "Enter the student course: \n";
            cin >> course;
            cout << "Enter the student marks: \n";
            cin >> marks;

            sm.addStudent(Student(name, rollNumber, course, marks));
        } else if (choice == 3) {
            string name;
            cout << "Enter the student name to search: \n";
            cin >> name;

            sm.getStudentByName(name);
            continue;
        } else if (choice == 4) {
            string rollNumber;
            cout << "Enter the student roll number to search: \n";
            cin >> rollNumber;

            sm.deleteStudent(rollNumber);
            continue;
        } else if (choice == 5) {
            string rollNumber;
            cout << "Enter the student roll number to delete: \n";
            cin >> rollNumber;

            sm.deleteStudent(rollNumber);
        } else if (choice == 6) {
            sm.displayAllStudents();
        } else if (choice == 7) {
            cout << "Exiting the program...\n";
            break;
        } else {
            cout << "Invalid option! Please try again.\n";
        }
    }

    return 0;
}
