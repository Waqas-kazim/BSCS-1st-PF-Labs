#include<iostream>
using namespace std;

int main() {
    int num, sml, lrg;
    char ch;
    bool firstInput = true;
    
    do {
        cout << "Enter a number (y/Y to end): ";
        if (cin >> num) {  // If input is a number
            if (firstInput) {
                sml = lrg = num;  // Initialize with first number
                firstInput = false;
            } else {
                if (num > lrg) lrg = num;
                if (num < sml) sml = num;
            }
        } else {  // If input is not a number
            cin.clear();  // Clear error state
            cin >> ch;    // Read the character
            if (ch == 'y' || ch == 'Y') break;
        }
    } while (true);

    if (!firstInput) {
        cout << "Smallest is: " << sml << endl;
        cout << "Largest is: " << lrg << endl;
    } else {
        cout << "No numbers were entered." << endl;
    }
    
    return 0;
}