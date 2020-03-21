#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    int diff = a - b;
    if (diff == 0) {
        cout<<"These numbers are equal.";
    } else if (diff < 0)
    {
        cout<<b<<" is large.";
    } else {
        cout<<a<<" is large.";
    }
    cout<<endl;
    return 0;
}