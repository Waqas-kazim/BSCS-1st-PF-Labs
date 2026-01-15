#include<iostream>
using namespace std;
// 34. Input two 4X4 array and subtract the firs form second and display the result 

main(){
    int rows=4;
    int columns=4;
    int result[rows][columns];
    int arr1[rows][columns]={};
    cout << "input first array: " << endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << "enter arr["<< i << "][" <<j<<"] = ";
            cin>>arr1[i][j];
        }
    }
    cout << "input second array: " << endl;
    int arr2[rows][columns]={};
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << "enter arr["<< i << "][" <<j<<"] = ";
            cin>>arr2[i][j];
        }
    }
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            result[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    cout <<"first array" << endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }
    cout <<"second array" << endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }
    cout <<"result array" << endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

}