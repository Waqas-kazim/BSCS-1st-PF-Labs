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
        file << input << endl;
        file.close();
        return 0;
    } else {
        cout << "Error creating file." << endl;
        return 1;
    }
}