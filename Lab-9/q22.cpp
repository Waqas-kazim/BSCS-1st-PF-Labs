#include<iostream>
#include<string>
using namespace std;
// 22. Ask the user to enter a string and display each word of the string on separate line
main(){
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    
    for(int i=0; i < text.length(); i++){
        if(text[i] == ' '){
            cout << endl;
        }else{
            cout << text[i];
        }
    }
    
}