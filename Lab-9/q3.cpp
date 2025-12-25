#include<iostream>
using namespace std;
// 3. Declare character array of size 15 and input your name and display it on console
main(){
    char name[15];
    cout << "enter your name: " ;
    cin.getline(name, 15);
    cout << "Your name is \"" << name << "\"" ;
    
}