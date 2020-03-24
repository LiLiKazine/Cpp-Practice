#include <iostream>
#include <iomanip>
#include <cmath>
#include "GradeBook.h"

using namespace std;

void testGradeBook()
{
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    cout << "gradeBook1 created for coutse: " << gradeBook1.getCourseName()
         << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
         << endl;
    gradeBook1.setCourseName("CS101 C++ Programming");
    cout << "\ngradeBook1's course name is: "
         << gradeBook1.getCourseName()
         << "\ngradeBook2's course name is: "
         << gradeBook2.getCourseName() << endl;

    gradeBook1.displayMessage();
    gradeBook1.inputGrades();
    gradeBook1.displayGradeReport();
}

void calcuRate()
{
    double amount;
    double principal = 1000.0;
    double rate = .05;

    cout << "Year" << setw(21) << "Amount on deposit" << endl;
    cout << fixed << setprecision(2);

    for (unsigned int year = 1; year < 10; year++)
    {
        amount = principal * pow(1.0 + rate, year);
        cout << setw(4) << year << setw(21) << amount << endl;
    }
}

int main()
{
    testGradeBook();
    // calcuRate();
}