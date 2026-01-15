#include<iostream>
#include<cstdlib>  // For rand() and srand()
#include<ctime>    // For time()
using namespace std;
// 26. Write a function with random initialize which will initialize 500 elements array random values between 1 and 1000. Write a function output which will display this array

const int SIZE = 500;

void randomInitialize(int arr[]);
void output(int arr[]);

int main(){
    int arr[SIZE];
    
    randomInitialize(arr);
    output(arr);
    
    return 0;
}

void randomInitialize(int arr[]){
    srand(time(0));
    
    for(int i = 0; i < SIZE; i++){
        arr[i] = rand() % 1000 + 1;
    }
    cout << "Array initialized with random values\n";
}

void output(int arr[]){
    cout << "Array elements:";
    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}