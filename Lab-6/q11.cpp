#include<iostream>
using namespace std;
// 11. Write a function, which takes two arguments, first char and second int; prints a rectangle of char of size int. Call this function 
// in main two times with variable and constants 
void printRectangle(char ch, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
main(){
    printRectangle('*', 4); // Calling with constants
    char character = '#';
    int num = 4;
    printRectangle(character, num); // Calling with variable
}