#include<iostream>
using namespace std;
main()
{
    const float pi = 3.14159;
    float radius ;
    cout << "Enter radius: ";
    cin>> radius;
    cout << "Diameter is: " << 2*radius << endl;
    cout << "Circumference is: " << 2*pi*radius << endl;
    cout << "Area is: " << pi * radius * radius;

}