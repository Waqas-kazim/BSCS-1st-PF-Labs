#include<iostream>
using namespace std;

// 10. Ask the user to enter an integer array of ten elements and sort this array in ascending and descending order
int main(){
    int arr[10];
    int temp;

    cout << "Enter 10 integer values:\n";
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
    cout << endl;
    cout << "Ascending order: ";
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Descending order: ";
    for(int i = 9; i >= 0; i--){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}