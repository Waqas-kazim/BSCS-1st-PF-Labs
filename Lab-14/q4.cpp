// 4.	Write a program to write numbers from 1 to 10 to a file, one number per line. 
#include <iostream>
#include <fstream>
using namespace std;
main(){
    ofstream file("q4.txt");
    if(file.is_open()){
        for(int i = 1; i <= 10; i++){
            file <<i<< endl;
        }
        file.close();
    } else {
        cout << "Error creating file." << endl;
        return 1;
    }
}