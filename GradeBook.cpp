#include <iostream>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string name) : courseName(name)
{
}

GradeBook::GradeBook(string name, string teacher): courseName(name), teacherName(teacher)
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

void GradeBook::setTeacherName(string name) {
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
         <<"This course is presented by: " << teacherName
         << endl;
}