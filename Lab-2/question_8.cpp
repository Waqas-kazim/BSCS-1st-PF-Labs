#include<iostream>
using namespace std;
main()
{
    int fv, sv;
    float result;
    cout << "Enter first value: ";
    cin >> fv;
    cout << " enter second value: ";
    cin >> sv;
    if(sv!=0)
    {
        result = fv/sv;
        cout << "The result is: " << result;
    }

}