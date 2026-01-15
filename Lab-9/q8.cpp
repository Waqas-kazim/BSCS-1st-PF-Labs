#include<iostream>
using namespace std;

int main(){
    float arr[20] = {1.5, 2.3, 3.7, 4.2, 5.1, 6.8, 7.4, 8.9, 9.6, 10.2,11.5, 12.3, 13.7, 14.2, 15.1, 16.8, 17.4, 18.9, 19.6, 20.2};
    
    float searchValue;
    cout << "Array values: ";
    for(int i = 0; i < 20; i++){
        cout << arr[i] << " ";
    }
    
    cout << "Enter value to search: ";
    cin >>searchValue;
    
    bool found= false;
    for(int i = 0;i < 20; i++){
        if(arr[i] ==searchValue){
            found = true;
            break;
        }
    }
    
    if(found){
        cout << "Value exist" << endl;
    }else {
        cout<< "Value not exist" << endl;
    }
    
    return 0;
}