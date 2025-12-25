#include<iostream>
using namespace std;
// 33. Input a 4X3 array subtract 7 from first and lass row. And display it on screen 
main(){
    int rows=4;
    int columns=3;
    int arr[rows][columns]={};
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << "enter arr["<< i << "][" <<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            if(i==0||i==3)
            arr[i][j]=arr[i][j]-7;
        }
    }
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
}