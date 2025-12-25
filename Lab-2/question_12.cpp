#include<iostream>
using namespace std;
main()
{
    float age, weight;
    cout << "enter age: ";
    cin >> age;
    cout << "enter weight";
    cin >> weight;
    if(age>18 && weight>50)
    cout << "you are eligible to donate blood";
}