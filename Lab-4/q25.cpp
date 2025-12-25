#include<iostream>
using namespace std;
// 12.	Input base and power and display the result. For example, if user enters base 4 and power 2 (42) then display 16
main(){
    int base, power, result=1;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter power: ";
    cin>>power;
    for(int i=1; i<=power; i++){
        result = result * base;
    }
    cout<<base<<"^"<<power<<" = "<<result;

}