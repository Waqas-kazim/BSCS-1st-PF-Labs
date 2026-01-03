// 3.	Write a program to accept a string from the user and write it to a file. 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
main(){
    string input;
    ofstream file("q3.txt");
    if(file.is_open()){
        cout << "Enter a string: ";
        getline(cin, input);
        file << input << '\n';
        file.close();
    } else {
        cout << "Error creating file.\n";
        return 1;
    }
}