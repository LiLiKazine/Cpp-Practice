#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

void moveTortoise(int *, int);
void moveHare(int *, int);

int main()
{
    srand(time(0));
    int tortoise = 1, hare = 1;
    cout << "BANG!!!!\n"
         << "AND THEY'RE OF !!!!!" << endl;
    while (true)
    {

        int action = rand() % 10 + 1;
        moveTortoise(&tortoise, action);
        moveHare(&hare, action);
        if (hare >= 70 && tortoise >= 70)
        {
            cout << "It's a tie." << endl;
            break;
        }
        else if (tortoise >= 70)
        {
            cout << "TORTOISE WINS!!!YAY!!!" << endl;
            break;
        }
        else if (hare >= 70)
        {
            cout << "Hare wins. Yuch. " << endl;
            break;
        }

        for (size_t i = 0; i < 70; i++)
        {
            if (tortoise == hare && tortoise == i + 1)
            {
                cout << "OUCH!!!";
            }
            else if (i == tortoise - 1)
            {
                cout << "T";
            }
            else if (i == hare - 1)
            {
                cout << "H";
            }
            else
            {
                cout << "=";
            }
        }
        cout << endl;
    }

    return 0;
}

void moveTortoise(int *p, int a)
{
    if (1 <= a && a <= 5)
    {
        *p += 5;
    }
    else if (6 <= a && a <= 7)
    {
        *p -= 6;
    }
    else
    {
        *p += 1;
    }
}
void moveHare(int *p, int a)
{
    if (1 <= a && a <= 2)
    {
        *p += 9;
    }
    else if (3 <= a && a <= 4)
    {
        *p -= 12;
    }
    else if (5 <= a && a <= 8)
    {
        *p += 1;
    }
    else
    {
        *p -= 2;
    }
}
