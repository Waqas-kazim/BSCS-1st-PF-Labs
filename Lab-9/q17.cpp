#include<iostream>
using namespace std;
// 17. Ask the user to enter a character array and display it on the screen
int main(){
    char text[100];
    cout<<"Enter text: ";
    cin.getline(text, 100);
    cout << "You entered: " << text << endl;
    return 0;
}