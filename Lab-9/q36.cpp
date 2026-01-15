#include<iostream>
using namespace std;
// 36. Input a 5X5 array and save its transpose in another array and display it on screen
main(){
    int rows=5;
    int columns=5;
    int arr1[rows][columns]={};
    int arr2[rows][columns]={};
    cout << "input array: " << endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << "enter arr["<< i << "][" <<j<<"] = ";
            cin>>arr1[i][j];
        }
    }
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            arr2[i][j]=arr1[j][i];
        }
    }
    cout <<"original array" << endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }
    cout <<"transpose array" << endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }
}