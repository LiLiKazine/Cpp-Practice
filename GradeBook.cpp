#include <iostream>
#include <iomanip>
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
    unsigned int gradeCounter = 0;

    cout << "Enter grade or -1 to quit: ";
    int grade = 0;
    cin >> grade;
    while (grade != -1)
    {

        total += grade;
        gradeCounter++;
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }
    if (gradeCounter != 0)
    {
        double average = static_cast<double>(total) / gradeCounter;
        cout << "\nTotal of all" << gradeCounter << " grades entered is " << total << endl;
        cout << setprecision(2) << fixed;
        cout << "Class average is " << average << endl;
    }
    else
    {
        cout << "No grades were entered" << endl;
    }
}