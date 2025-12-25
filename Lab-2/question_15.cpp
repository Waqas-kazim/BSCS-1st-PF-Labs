#include<iostream>
using namespace std;
main()
{
    int num;
    cout << "days since last password change: ";
    cin >> num;
    if(num>90)
    cout<<"Password expired - please change";
}