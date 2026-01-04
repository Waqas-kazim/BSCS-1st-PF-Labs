// 1. Write a program to create a text file and write your
// registration number and full name in it.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string reg;
	string name;
	ofstream file("q1.txt");
	if(file.is_open()){
		cout <<"Enter your reg. num : ";
		getline(cin,reg);
		cout<< "Enter your name: ";
		getline(cin, name);
		file << "Registration Number: " << reg << '\n';
		file <<"Full Name: " << name << endl;
		file.close();
		return 0;
	} else {
		cout << "Error creating file." << endl;
		return 1;
	}
}