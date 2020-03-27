#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    unsigned int *vPtr;
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << "values[" << i << "]: " << values[i] << endl;
    }
    vPtr = values;
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << "ptr_" << i << ": " << *(vPtr + i) << endl;
    }
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << "values_" << i << ": " << *(values + i) << endl;
    }
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << "ptr[" << i << "]: " << vPtr[i] << endl;
    }

    return 0;
}