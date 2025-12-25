#include<iostream>
using namespace std;
// 16. GCD(Greatest common devisor): Write a function which takes two integers as argument and find gcd of these integers and 
// return it. You can pass integers at any order. Hint: write a loop which executes from 1 to largest digit and find the integer 
// which divides both integers. 
int gcd(int a, int b){
    if(a==0) return b;
    if(b== 0) return a;
    while(b!=0){
        int temp= b;
        b = a%b;
        a =temp;
    }
    return a;
}
main(){
    int a,b;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>> b;
    cout<<"GCD is "<< gcd(a,b);
    
}