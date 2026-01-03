// 11.	Write a program to compare the contents of two files and display whether they are identical or not.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file1("q11_1.txt");
    ifstream file2("q11_2.txt");

    if (!file1.is_open() || !file2.is_open()) {
        cout << "Error opening one of the files." << endl;
        return 1;
    }

    char ch1, ch2;
    bool areIdentical = true;

    while (true) {
        file1.get(ch1);
        file2.get(ch2);

        if (file1.eof() && file2.eof()) {
            break; // Both files ended, they are identical
        }
        if (file1.eof() || file2.eof() || ch1 != ch2) {
            areIdentical = false;
            break; // Files differ in length or content
        }
    }

    if (areIdentical) {
        cout << "The files are identical." << endl;
    } else {
        cout << "The files are not identical." << endl;
    }

    file1.close();
    file2.close();
    return 0;
}