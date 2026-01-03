// 2.	Create a program to read the content of a text file and display it on the screen. 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
main(){
    string line;
    ifstream file("q2.txt");
    if(file.is_open()){
        while(getline(file, line)){
            cout << line << '\n';
        }
        file.close();
    } else {
        cout << "Error opening file.\n";
        return 1;
    }
}