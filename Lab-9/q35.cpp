#include<iostream>
using namespace std;
// 35. Input a 5X5 array and only display values on diagonal 
main(){
    int rows=5;
    int columns=5;
    int arr1[rows][columns]={};
    cout << "input array: " << endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << "enter arr["<< i << "][" <<j<<"] = ";
            cin>>arr1[i][j];
        }
    }
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            if(i==j)
            cout << arr1[i][j] << "\t";
        }
    }
}