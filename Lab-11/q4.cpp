#include<iostream>
using namespace std;
// 4.	Dynamically allocate memory to an integer array of size 10. Input and output its values using input and output functions 

main(){
    int size = 10;
    int *darr = new int[size];
    for(int i = 0; i<size;i++){
        cout << "enter value no." << i+1 << " : " ;
        cin >> darr[i];
    } 
    for(int i = 0; i<size;i++){
        cout << darr[i] << "\t";
    }

    
}