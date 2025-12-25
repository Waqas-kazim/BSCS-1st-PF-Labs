#include<iostream>
using namespace std;
// 6. Write a function which input a number and finds whether it is even OR odd
void evenOdd(){
    int num;
    cout << "enter a number: " ;
    cin >> num;
    if(num%2==0){
        cout << "Even";
    }else{
        cout << "Odd";
    }
}
main(){
    evenOdd();
}