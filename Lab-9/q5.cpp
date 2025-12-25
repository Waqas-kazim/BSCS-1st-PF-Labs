#include<iostream>
using namespace std;
// 5. Declare an integer array of size 10. Input this array and force the user to enter a value between 1 to 20. Make a histogram of this array just like, we did in the lecture.
main(){
    int size =10;
    int arr[size];
    cout << "enter a number between 1-20: ";
    for(int i = 0; i<size; i++){
        cout << "enter value no. " << i+1 << " = " ;
        cin>>arr[i];
        if(arr[i]>=1 && arr[i]<=20){
            continue;
        }else{
            i--;
            continue;
        }
    }
    cout << "Histogram:";
    for(int i = 0; i<10; i++){
        cout << arr[i] << ":\t";
        for(int s = 0; s < arr[i]; s++){
            cout << '*';
        }
        cout << '\n';
    }

    
}