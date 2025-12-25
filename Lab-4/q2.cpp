#include<iostream>
using namespace std;
// 2.	Ask the user to enter a digit and check whether this digit is even or odd (Ternary Operator)
main(){
    int num;
    cout << "enter a number: ";
    cin>> num;
    (num%2==0)?cout<<"even":cout<<"odd";
}