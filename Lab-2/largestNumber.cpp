#include<iostream>
using namespace std;
main()
{
    cout << "Enter three values: ";
    int a, b, c;
    cin >> a >> b >> c;
    if(a>b)
    {
        if(a>c)
            cout << a << " is the largest number.";
        else
            cout << c << " is the largest number.";
    }
    else
    {
        if(b>c)
            cout << b << " is the largest number.";
        else
            cout << c << " is the largest number.";
    }
}