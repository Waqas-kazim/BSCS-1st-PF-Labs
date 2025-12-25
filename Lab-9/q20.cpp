#include<iostream>
#include<cstring>
using namespace std;
// 20. Declare an array of characters. The size of the array is 100.Input a string from the user and returns it with more spaces on the location where spaces already exist. 
main(){
    char arr[100];
    cout << "entere text: " ;
    cin.getline(arr, 100);
    cout << arr;
    cout<< "Output: ";
    for(int i= 0;i<strlen(arr); i++){
        cout << arr[i];
        if(arr[i] ==' '){
            cout << "\t";
        }
    }
    
}