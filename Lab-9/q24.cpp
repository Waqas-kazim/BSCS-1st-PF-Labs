#include<iostream>
#include<string>
#include<cctype>  
using namespace std;
// 24. Input your name (capital and small letters mixed) and display the name in Capital letters.
main(){
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    for(int i = 0; i < name.length(); i++){
        name[i] = toupper(name[i]);
    }
    
    cout << "Uppercase: " << name;
}