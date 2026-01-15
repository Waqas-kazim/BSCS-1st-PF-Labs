#include<iostream>
using namespace std;
// 14. Write a function that take two values as argument and then swap the values. Call this function from main by input two 
// variables and pass these variables to this function. Display the values of variables after the function call 
int swap(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}
main(){
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    swap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
}