#include<iostream>
using namespace std;
// 8.	Input a character array through character pointer copy first 5 characters of this array to another pointer and display it. 
main(){
    char * name = new char[50];
    char * name1= new char[50];
    cout << "enter your name: ";
    cin.getline(name, 50);
    for(int i = 0; i<5;i++){
        name1[i]=name[i];
    }
    cout << name<<endl;
    cout << name1<<endl;
    delete name;
    delete name1;
}