#include<iostream>
using namespace std;
main(){
    int marks[10];
    cout << "number " << "1" << " is: ";
    cin >> marks[0];
    int min= marks[0], max = marks[0];
    for(int i = 1; i < 10 ; i++){
        cout << "number " << i+1 << " is: ";
        cin >> marks[i];
        if(marks[i]<min){
            min = marks[i];
        }
        if(marks[i]>max){
            max = marks[i];
        }
    }
    cout << "max number is: " << max << endl;
    cout << "min number is: " << min;
    
}