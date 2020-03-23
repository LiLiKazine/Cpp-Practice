#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cout<<"Input three different integers: ";
    cin>>a>>b>>c;
    cout<<"Sum is "<<a+b+c<<endl;
    cout<<"Average is "<<(a+b+c)/3<<endl;
    cout<<"Product is "<<a*b*c<<endl;
    cout<<"Smallest is "<<min(min(a,b),c)<<endl;
    cout<<"Largest is "<<max(max(a,b),c)<<endl;
    return 0;
}