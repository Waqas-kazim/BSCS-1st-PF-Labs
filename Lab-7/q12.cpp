#include<iostream>
#include "q12.h"
using namespace std;
// 12. Write question no 1 in a header file and used this header file inside your program.
main(){
    int a=3, b=3, c=3, d=3, e=3;
    cout <<"addition: " <<  add(a, b, c) << endl;
    cout << "subtraction: " << sub(a, b, c, d, e) << endl;
    cout <<"multiplication: " <<  mul(a, b, c, d, e) << endl;
    return 0;
}