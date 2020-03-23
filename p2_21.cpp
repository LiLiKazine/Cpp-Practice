#include<iostream>

using namespace std;

int main() {
    for (int i = 0; i < 9; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<"*";
        for (int j = 0; j < 7; j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for (int i = 0; i < 9; i++)
    {
        cout<<"*";
    }
    cout<<"\n\n\n";   

    return 0;
}