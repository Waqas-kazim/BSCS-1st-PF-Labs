#include<iostream>
using namespace std;
main(){
    float cgpa;
    char gender;
    cout << "Enter \'m\' for male and \'f\' for female: ";
    cin >> gender;
    cout << "Enter your cgpa: " ;
    cin >> cgpa;
    if ((cgpa>3.5&&gender=='m') || (cgpa>3.0&&gender=='f'))
    {
        cout << "You are eligible";
    }else{
        cout << "you are not eligible";
    }
    
}