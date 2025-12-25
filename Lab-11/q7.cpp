#include<iostream>
using namespace std;
// 7.	Input a character array through character pointer copy it to another pointer and display it on screen 
int main(){
    int size = 50;
    char *name = new char[size];
    char *copy = name;
    cout << "enter your name: ";
    cin >> name;
    copy = name;
    cout << copy;
    delete[] name;
    delete[] copy;
    return 0;
}