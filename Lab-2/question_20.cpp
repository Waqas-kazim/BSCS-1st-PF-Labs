#include<iostream>
using namespace std;
main()
{
    char ch;
    cout<< "enter first letter of your year: ";
    cin>>ch;
    if(ch=='f')
    cout << "you are a junior";
    else if(ch=='l')
    cout << "your are a senior";
    else if(ch=='s')
    cout << "you are second year student";
    else if(ch=='t')
    cout << "you are third year student";
}