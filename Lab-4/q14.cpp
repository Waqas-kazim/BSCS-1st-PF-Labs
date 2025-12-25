#include<iostream>
using namespace std;
// 14.	Ask the user to enter a number and calculate factorial up to that number. For example, if user enter 7 then you will calculate 7! =7*6*5*4*3*2*1
main(){
    int num,fact=1;
    cout<<"Enter a number to calculate factorial: ";
    cin>>num;
    int i=num;
    while(i>=1){
        fact=fact*i;
        i--;
    }
    cout<<"Factorial of "<<num<<" is: "<<fact;

}