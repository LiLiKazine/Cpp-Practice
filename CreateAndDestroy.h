#include <string>
using namespace std;

#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy
{
private:
    int objectID;
    string message;

public:
    CreateAndDestroy(int, string);
    ~CreateAndDestroy();
};

#endif