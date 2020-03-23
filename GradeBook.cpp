#include <iostream>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string name) : courseName(name)
{
}

GradeBook::GradeBook(string name, string teacher) : courseName(name), teacherName(teacher)
{
}

void GradeBook::setCourseName(string name)
{
    if (name.size() <= 25)
    {
        courseName = name;
    }
    if (name.size() > 25)
    {
        courseName = name.substr(0, 25);
        cerr << "Name \"" << name << "\" exceeds maxium length(25).\n"
             << "Limiting courseName to first 25 characters.\n"
             << endl;
    }
}

void GradeBook::setTeacherName(string name)
{
    teacherName = name;
}

string GradeBook::getCourseName() const
{
    return courseName;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n"
         << getCourseName() << "!\n"
         << "This course is presented by: " << teacherName
         << endl;
}

void GradeBook::determinClassAverage() const
{
    int total = 0;
    unsigned int gradeCounter = 1;
    while (gradeCounter <= 10)
    {
        cout << "Enter grade: ";
        int grade = 0;
        cin >> grade;
        total += grade;
        gradeCounter++;
    }
    int average = total / 10;
    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Class average is " << average << endl;
}