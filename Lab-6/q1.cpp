#include<iostream>
using namespace std;
// 1. Write a function which input a character and tells whether it is a small letter of large letter and not a letter 
void letter(){
    char ch;
    cout << "enter a character: ";
    cin >> ch;
    if(ch>='a'&&ch<='z'){
        cout << "small letter";
    }else if(ch>='A'&&ch<='Z'){
        cout << "capital letter";
    }else{
        cout << "not a letter";
    }
}
main(){
    letter();
    
}