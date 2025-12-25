#include<iostream>
using namespace std;
// 13. Write a function, which takes two arguments and print largest. Use ternary operator 
int printLargest(int a, int b){
    int largest = (a > b) ? a : b;
    return largest;
}
main(){
    int a = 10, b = 20;
    int largest = printLargest(a, b);
    cout << "The largest number between " << a << " and " << b << " is: " << largest << endl;
}