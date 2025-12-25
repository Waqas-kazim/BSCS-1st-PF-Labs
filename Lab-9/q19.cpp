#include<iostream>
using namespace std;
// 19. Input a string from the user and count how many characters (excluding space) are entered in the text
main(){
    string text;
    cout << "enter some text: " ;
    getline(cin, text);
    cout << text.length();
    
}