#include<iostream>
using namespace std;
main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if(ch>='a' && ch<='z'){
        cout << ch << " is a lowercase letter.";
    }else if(ch>='A' && ch<='Z'){
        cout << ch << " is an uppercase letter.";
    }else{
        cout << "wrong input.";
    }
    
}