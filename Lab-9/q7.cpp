#include<iostream>
using namespace std;
// 7. Input an integer array of size 10 and display the largest and smallest element of the array
main(){
    int size = 10, smallest, largest;
    int arr[size];
    for(int i = 0; i<size;i++){
        cout << "enter value " << i+1 << " = " ;
        cin >> arr[i];
    }
    smallest=largest=arr[0];
    for(int i = 0; i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout << "smallest is: " << smallest<<endl;
    cout << "largest is: " << largest<<endl;

}