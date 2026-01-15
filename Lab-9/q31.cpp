#include<iostream>
using namespace std;
// 31. Input a 5X5 array using loop. And display it on screen looking like a matrix
main(){
    int size = 5;
    int arr[size][size]={};
    for(int i = 0; i<size;i++){
        for(int j = 0; j<size;j++){
            cout << "enter arr["<< i << "][" <<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<size;i++){
        for(int j = 0; j<size;j++){
            cout << arr[i][i] << "\t";
        }
        cout << endl;
    }
    
}