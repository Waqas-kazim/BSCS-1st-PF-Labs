#include<iostream>
using namespace std;
//  12. Write a function which calculate average of five integer after input from user
void avg(){
    float val,sum = 0.0;
    for(int i = 1 ; i<=5 ; i++){
        cout << "Enter an integer: " ;
        cin >> val;
        sum+=val;
    }
    cout << "Average is: " << sum/5.0 ;
}
main(){
    avg();
}