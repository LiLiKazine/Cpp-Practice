#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include "GradeBook.h"

using namespace std;

void testGradeBook();
void calcuRate();
int squareByValue(int);
void squareByReference(int &);
unsigned int boxVolume(unsigned int length = 1, unsigned int width = 1, unsigned int height = 1);
unsigned long factorial(unsigned long);
int recursiveMinimum(const int, const int);
const array<int, 23> arr = {5, 29, 4, 123, 1, 5, 32, 1, 3, 9, 5, 2, 5, 2, 4, 8, 335, 189, 24, 73, 5, 1, 56};
size_t getSize(double *);

int main()
{
    // testGradeBook();
    // calcuRate();
    // int x = 2, z = 4;
    // cout << "x= " << x << " before squareByValue\n"
    //      << squareByValue(x) << endl;
    // cout << "x= " << x << " after squareByValue\n"
    //      << endl;

    // cout << "z= " << z << " before squareByReference" << endl;
    // squareByReference(z);
    // cout << "z= " << z << " after squareByReference" << endl;
    // for (unsigned int i = 0; i <= 10; i++)
    // {
    //     cout << setw(2) << i << "! = " << factorial(i) << endl;
    // }
    // cout << "Recursive minimum is: " << recursiveMinimum(0, arr.size() - 1) << endl;

    double numbers[20];
    cout << "The number of bytes in the array is " << sizeof(numbers);
    cout << "\nThe number of bytes returned by getSize is "
         << getSize(numbers) << endl;
}

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

int squareByValue(int number)
{
    return number * number;
}

void squareByReference(int &numberRef)
{
    numberRef *= numberRef;
}

unsigned int boxVolume(unsigned int length, unsigned int width, unsigned int height)
{
    return length * width * height;
}

unsigned long factorial(unsigned long number)
{
    if (number <= 1)
        return 1;
    else
        return number * factorial(number - 1);
}

int recursiveMinimum(const int lo, const int hi)
{
    if (lo < hi)
    {
        return min(arr[lo], recursiveMinimum(lo + 1, hi));
    }
    return arr[hi];
}

size_t getSize(double *ptr)
{
    return sizeof(ptr);
}