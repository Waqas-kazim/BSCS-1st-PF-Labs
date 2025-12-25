#include<iostream>
using namespace std;
main()
{
    int asci, i, e;
    cout << "Enter ascii value: ";
    cin >> asci;
    i = asci;
    e = asci + 5;
    while(i<=e){
        cout << char(i) << endl;
        i++;
    }
}