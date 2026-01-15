#include<iostream>
using namespace std;
// 1. Input a float array of size 10 and display it on console on same line with tab spaces
main(){
    int size = 10;
    float arr[size];
    for(int i=0; i<size; i++){
        cout << "enter val[" << i+1 << "]: " ;
        cin >> arr[i];
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << "\t";
    }
}