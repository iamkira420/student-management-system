/**
 * Simple Student Management System that allows users to perform CRUD (Create, Read, Update, Delete) operations
 * on a list of students. Each student have details such as Names, Roll Number, Course, and Marks. 
 * @author BK201
 * @date 11 February 2025
*/

#ifndef STUDENT_H // Include guard to prevent multiple inclusions
#define STUDENT_H

#include <string>
#include <iostream>
using namespace std;


class Student {
    public:
        void setName(string);
        string getName();
        void setRollNumber(string);
        string getRollNumber();
        void setCourseName(string);
        string getCourseName();
        void setMarks(int);
        int getMarks();
        string getStudent();
        Student();
        Student(string, string, string, int);

    private:
        string name;
        string rollNumber;
        string courseName;
        int marks;
 
};

#endif // STUDENT.H