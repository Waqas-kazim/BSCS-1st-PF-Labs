#include<iostream>
using namespace std;
// 23. Input your first name and last name separately, and then display your full name (first and second concatenated) 
main(){
    string fname, sname;
    cout << "enter first name: ";
    getline(cin, fname);
    cout << "enter second name: ";
    getline(cin, sname);
    cout << fname<< " " << sname;
    
}