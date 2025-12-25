#include<iostream>
using namespace std;

// 9. Declare and initialize an integer array of minimum size ten with some values. 
// Ask user to enter key value and count how many times this key value exists in the array.
int main(){
    int arr[10] = {5, 12, 8, 5, 15, 5, 9, 5, 20, 5};
    int key;
    int count = 0;

    cout <<"Array values: ";
    for(int i = 0; i< 10; i++){
        cout << arr[i] << " ";
    }  
    cout << endl;
    cout << "Enter key value to search: ";
    cin >>key;
    
    for(int i=0; i< 10; i++){
        if(arr[i] ==key){
            count++;
        }
    }
    
    if(count > 0){
        cout << "it exists " << count << " times in the array" << endl;
    }else {
        cout << "Value not exists" << endl;
    }
    
    return 0;
}