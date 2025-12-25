#include<iostream>
using namespace std;
// 2.	Declare three pointers to character. Dynamically allocate memory and assign A, B, C to them and then Display them. 
main(){
    char *p1 = new char('A');
    char *p2 = new char('B');
    char *p3 = new char('C');
    cout << *p1 << *p2 << *p3;
}