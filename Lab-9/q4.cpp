#include<iostream>
using namespace std;
// 4. Declare and initialize an integer array of size 7 in one statement. Copy array data on another array using loop and display it on console. 
main(){
    int size=7;
    int arr1[size] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[size];
    for(int i =0; i<size; i++){
        arr2[i] = arr1[i];
    }
    for(int i =0; i<size; i++){
        cout << arr2[i] << '\t';
    }

    
}