#include<iostream>
#include "GradeBook.h"

using namespace std;

void testGradeBook()
{
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");
    
    cout << "gradeBook1 created for coutse: " << gradeBook1.getCourseName()
              << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
              << endl;
}

int main()
{
    testGradeBook();
}