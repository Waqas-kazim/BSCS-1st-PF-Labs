#include<iostream>
using namespace std;
int sumFunc(int, int);
main(){

    int a = 5;
    int b = 10;
    int sum = sumFunc(a, b);
    cout << "Sum is : " << sum <<endl;
    
}
int sumFunc(int a, int b){
    return a+b;
}