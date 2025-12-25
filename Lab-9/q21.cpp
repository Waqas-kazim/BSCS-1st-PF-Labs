#include<iostream>
#include<cstring>
using namespace std;
// 21. Ask the user to enter his name and display his name in reverse order
main(){
    char name[50];
    cout  << "enter your name: " ;
    cin.getline(name, 50);
    int lng = strlen(name);
    for(int i = lng-1; i>=0;i--){
        cout << name[i];
    }
    
}