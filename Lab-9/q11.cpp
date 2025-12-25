#include<iostream>
using namespace std;

// 11. Ask the user to enter a float array of ten elements and sort this array in ascending and descending order
int main(){
    float arr[10];
    float temp;

    cout << "Enter 10 float values:\n";
    for(int i = 0; i < 10; i++){
        cout << "Enter value " << (i+1) << ": ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Original array: ";
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

    cout << "Ascending order: ";
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "\nDescending order: ";
    for(int i = 9; i >= 0; i--){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}