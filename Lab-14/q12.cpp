// 12.	Create a program to read integers from a file and find the largest and smallest numbers.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inputFile("q12.txt");
    if (!inputFile) {
        cerr << "Unable to open file q12.txt";
        return 1; // Exit with error code
    }

    int number;
    int largest, smallest;
    bool firstNumber = true;

    while (inputFile >> number) {
        if (firstNumber) {
            largest = smallest = number;
            firstNumber = false;
        } else {
            if (number > largest) {
                largest = number;
            }
            if (number < smallest) {
                smallest = number;
            }
        }
    }

    inputFile.close();

    if (firstNumber) {
        cout << "No numbers were found in the file." << endl;
    } else {
        cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;
    }

    return 0;
}