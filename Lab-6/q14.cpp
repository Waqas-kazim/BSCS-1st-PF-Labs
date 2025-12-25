#include<iostream>
using namespace std;
// 14. Input five number between 1-20 using a loop and print # by passing these number to a function 
void printHashes(int n){
    for(int i=0; i<n; i++){
        cout << "#";
    }
    cout << endl;
}

main(){
    for(int i=0; i<5; i++){
        int num;
        cout << "Enter number " << (i+1) << " (between 1-20): ";
        cin >> num;
        if(num >= 1 && num <= 20){
            printHashes(num);
        } else {
            cout << "Number out of range. Please enter a number between 1 and 20." << endl;
            i--;
        }
    }

    
}