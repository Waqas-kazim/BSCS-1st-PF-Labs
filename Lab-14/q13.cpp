// 13.	Write a program to read integers from a file and count how many are even and how many are odd.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inputFile("q13.txt");
    if (!inputFile) {
        cerr <<"Unable to open file q13.txt"<<endl;
        return 1; 
    }

    int number;
    int evenCount = 0;
    int oddCount = 0;

    while (inputFile >> number) {
        if (number %2== 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    inputFile.close();
    cout <<"Even numbers count: " << evenCount << endl;
    cout <<"Odd numbers count: "<< oddCount << endl;

    return 0;
}