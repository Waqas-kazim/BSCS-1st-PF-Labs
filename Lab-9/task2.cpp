#include<iostream>
using namespace std;
main(){
    int arr1[3][3]={};
    cout << "============matrix 1==================="<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << "enter value for location arr1[";
            cout << j << "][" << i << "] = ";
            cin >> arr1[j][i] ;
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << arr1[i][j] << "\t" ;
        }
        cout << endl;
    }
    
}