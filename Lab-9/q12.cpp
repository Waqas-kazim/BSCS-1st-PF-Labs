#include<iostream>
using namespace std;

// 12. Ask the user to enter a character array of ten elements and sort this array in ascending and descending order
main(){
    char arr[10];
    char temp;

    cout << "Enter 10 characters:\n";
    for(int i = 0; i < 10; i++){
        cout << "Enter char " << (i+1) << ": ";
        cin >> arr[i];
    }

    cout << "\nOriginal array: ";
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10 - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "\nAscending order: ";
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }

    cout << "\nDescending order: ";
    for(int i = 9; i >= 0; i--){
        cout << arr[i] << " ";
    }

    cout << endl;
    
}