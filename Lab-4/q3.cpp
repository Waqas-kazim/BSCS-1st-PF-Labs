#include<iostream>
using namespace std;
// 3.	Take two integers from the user and check whether first is multiple of second (Ternary Operator)
main(){
    int a, b;
    cout << "enter two numbers: " << endl;
    cin >> a >> b ;
    (a%b==0)?cout << "1st is multiple of 2nd":cout << "1st in not muliple of 2nd";

}