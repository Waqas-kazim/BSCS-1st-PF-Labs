#include<iostream>
using namespace std;
void swap(int &a, int &b);
main(){
    int a = 5;
    int b = 6;
    swap(a, b);
    cout << a <<endl;
    cout << b <<endl;
}
void swap(int &a, int &b){
    a = a * 10 + b;
    b = a / 10;
    a = a % 10;
}