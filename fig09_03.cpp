#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;

int main()
{
    Time t;
    cout << "This initial universal time is ";
    t.printUniversal();
    cout << "\nThe initial standard time is ";
    t.printStandard();

    t.setTime(13, 27, 6);

    cout << "\nUniversal time after setTime is ";
    t.printUniversal();
    cout << "\nStandard time after setTime is ";
    t.printStandard();
    cout << endl;
    try
    {
        t.setTime(99, 99, 99);
    }
    catch (invalid_argument &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    cout << "\n\nAfter attemptiong invalid settings;"
         << "\nUniversal time: ";
    t.printUniversal();
    cout << "\nStandard time: ";
    t.printStandard();
    cout << endl;
}
