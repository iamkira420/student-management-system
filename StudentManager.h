#ifndef STUDENTMANAGER_H // Include guard to prevent multiple inclusions
#define STUDENTMANAGER_H

#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

class StudentManager {
    private:
        unordered_map<string, Student> students;

    public:
        void addStudent(Student);
        void getStudentByRollNumber(string);
        void getStudentByName(string);
        void displayAllStudents();
        void updateStudent(string, string, int);
        void deleteStudent(string);
};

#endif // STUDENTMANAGER_H