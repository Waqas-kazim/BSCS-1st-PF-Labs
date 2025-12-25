#include<iostream>
using namespace std;
// 32. Input a 3X5 array using loop, add 10 with every element of array. And display it on screen looking like a matrix
main(){
    int rows=3;
    int columns=5;
    int arr[3][5]={};
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << "enter arr["<< i << "][" <<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            arr[i][j]=arr[i][j]+10;
        }
    }
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
}