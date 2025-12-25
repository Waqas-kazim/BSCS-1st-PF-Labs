#include<iostream>
using namespace std;
// 6. In Fibonacci series next number is calculated by adding previous two numbers. 0, 1, 1, 2, 3, 5, 8, 13… Ask the user to
//  enter the bound and show Fibonacci numbers up to that bound. For example if user enters 60 then your program will
//  show. 0, 1, 1, 2, 3, 5, 8, 13, 21, 35, 56
main(){
    int fv = 1, sv = 1,current, bound;
    cout << "Enter boundary: " << endl;
    cin >> bound;
    cout << "0, 1, 1, ";
    int i = fv;
    while( fv+sv<bound){
        current = fv + sv;
        cout << current << ", ";
        i = fv = sv;
        sv = current;
    }
    
    
    
}