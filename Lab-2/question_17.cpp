#include<iostream>
using namespace std;
main()
{
    int a, b;
    cout << "enter value A: ";
    cin >> a;
    cout << "enter value B: ";
    cin >> b;
    if(a>b)
        cout << "A is greater than B" << endl;
    else if(a<b)
        cout << "A is less than B" << endl;
    else if(a==b)
        cout << "A is equal to B" << endl;
    else if(a!=b)
        cout << "A is not equal to B" << endl;
    else if(a>=b)
        cout << "A is greater than or equal to B" << endl;
    else if(a<=b)
        cout << "A is less than or equal to B" << endl;
}