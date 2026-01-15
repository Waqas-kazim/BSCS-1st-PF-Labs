#include<iostream>
using namespace std;
// 6. Input a float array of size 10 and display the smallest element of the array
main(){
    int size = 10, smallest;
    float arr[size];
    for(int i = 0; i<size;i++){
        cout <<"enter value no. " << i+1 << " = " ;
        cin >> arr[i];
    }
    smallest = arr[0];
    for(int i = 0; i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout <<"smallest is: "<< smallest;

    
}